#include "recordsmgmt.h"
#include "ui_recordsmgmt.h"

recordsMgmt::recordsMgmt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recordsMgmt)
{
    ui->setupUi(this);

}

recordsMgmt::~recordsMgmt()
{
    delete ui;
}


void recordsMgmt::on_accountNumber_editingFinished()
{
    accountNumber = ui->accountNumber->text();
}

void recordsMgmt::on_userName_editingFinished()
{
    name = ui->userName->text();

}

void recordsMgmt::on_Description_editingFinished()
{
    description = ui->Description->text();
}

void recordsMgmt::on_Date_editingFinished()
{
    date = ui->Date->text();
}

void recordsMgmt::on_checkNo_editingFinished()
{
    checkNo = ui->checkNo->text();

}

void recordsMgmt::on_credit_debit_cursorPositionChanged(int arg1, int arg2)
{
    credit_debit = ui->credit_debit->text();

}

void recordsMgmt::savingLedger()
{
    fstream fout;

        // opens an existing csv file or creates a new file.
        fout.open("ledger.txt",ios::out | ios::app);

        fout << "Account number" << "  " << "NAME" << "  " << "check no" << "  " << "descriptiom" << "  " << "credit\n\n";
        fout << accountNumber.toStdString() << " | " << name.toStdString() << " | " << checkNo.toStdString() << " | " << description.toStdString() << " | " << credit_debit.toStdString() << endl;

        fout<<"\n";

        fout.close();
}

void recordsMgmt::savingMaster()
{

    vector<string> comparisionFactor = recordsMap["accountNumber"];

    vector<vector<int>> index2d;

    vector<string> singleV;

    for(int i=0; i< comparisionFactor.size(); i++)
    {
        bool skipFlag=false;

        vector<int> commonindex;


            for(int j=0; j<singleV.size(); j++)
            {
                if(singleV[j]==comparisionFactor[i])
                {
                    skipFlag=true;
                }
            }

            if (skipFlag)
            {
                std::cout << "Repated value";
            }
            else
            {
                for(int j=0; j<comparisionFactor.size(); j++)
                {
                    if(comparisionFactor[i]==comparisionFactor[j])
                    {
                         commonindex.push_back(j);
                         singleV.push_back(comparisionFactor[i]);
                    }
                }

                index2d.push_back(commonindex);
            }



    }

    fstream fout;

    // opens an existing csv file or creates a new file.
    fout.open("Master.txt",ios::out | ios::app);




    for(int i=0; i<index2d.size(); i++)
    {
        for(int j=0; j<index2d[i].size(); j++)
        {
            if(j==0)
            {
                //fout << "\n\n  " <<recordsMap["accountNumber"][index2d[i][j]].toStdString() << "   checking account no # " << i << "\n";
                fout << "\n\n  " <<recordsMap["accountNumber"][index2d[i][j]] << "   checking account no # " << i << "\n";
            }

            //fout << recordsMap["checkNo"][index2d[i][j]].toStdString() <<"ok note   " << recordsMap["date"][index2d[i][j]].toStdString() << "       " << recordsMap["description"][index2d[i][j]].toStdString() << "   " << recordsMap["credit_debit"][index2d[i][j]].toStdString() << "\n";
            fout << recordsMap["checkNo"][index2d[i][j]] <<"ok note   " << recordsMap["date"][index2d[i][j]] << "       " << recordsMap["description"][index2d[i][j]] << "   " << recordsMap["credit_debit"][index2d[i][j]] << "\n";

            if(j==index2d[i].size()-1)
            {
                //fout << "\nPrevious balance: " << recordsMap["previousBalance"][index2d[i][j]].toStdString() << "\t" << "New balance: " << recordsMap["previousBalance"][index2d[i][j]].toInt() + recordsMap["credit_debit"][index2d[i][j].toInt();
                fout << "\nPrevious balance: " << recordsMap["previousBalance"][index2d[i][j]] << "\t" << "New balance: " <<  recordsMap["newBal"][index2d[i][j]];
                fout << "\n___________________________________________________________________________________________________\n";
            }
        }
    }

    fout.close();






    previousAcc= accountNumber.toStdString();
}

void recordsMgmt::on_saveRecords_clicked()
{

    QMessageBox msgBox;
    //msgBox.setText("Data Fields has been Modified  !");
    msgBox.setInformativeText("Do You Want To Save The Record Number -> " + QString::fromStdString(std::to_string(loopSize)));
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Yes);
    int ret = msgBox.exec();

    switch(ret)
    {
        case QMessageBox::Yes:

            // Save  function.
            savingLedger();



            VaccountNumber.push_back(accountNumber.toStdString());
            Vname.push_back(name.toStdString());
            Vdescription.push_back(description.toStdString());
            Vcredit_debit.push_back(credit_debit.toStdString());
            VcheckNo.push_back(checkNo.toStdString());
            Vdate.push_back(date.toStdString());
            VpreviousBalance.push_back(previousBalance.toStdString());
            newBal.push_back(std::to_string(previousBalance.toInt() + credit_debit.toInt()));

            ui->accountNumber->clear();
            ui->Description->clear();
            ui->userName->clear();
            ui->credit_debit->clear();
            ui->Date->clear();
            ui->checkNo->clear();
            ui->previousBalance->clear();

            if(loopSize==0)
            {
                recordsMap["accountNumber"] = VaccountNumber;
                recordsMap["name"] = Vname;
                recordsMap["date"] = Vdate;
                recordsMap["description"] = Vdescription;
                recordsMap["checkNo"] = VcheckNo;
                recordsMap["credit_debit"] = Vcredit_debit;
                recordsMap["previousBalance"] = VpreviousBalance;
                recordsMap["newBal"] = newBal;

                savingMaster();

            }


            if(loopSize!=0)
            {
                loopSize-=1;

                this->hide();

                this->show();
            }
            else
            {
                this->close();
            }

            break;
        case QMessageBox::Cancel:
                 ui->accountNumber->clear();
                 ui->Description->clear();
                 ui->userName->clear();
                 ui->credit_debit->clear();
                 ui->Date->clear();
                 ui->checkNo->clear();
                 ui->previousBalance->clear();

                 if(loopSize!=0)
                 {
                     loopSize-=1;

                     this->hide();

                     this->show();
                 }
                 else
                 {
                     this->close();
                 }

                break;
        default:
            break;
    }
}

void recordsMgmt::on_exitMainRecords_clicked()
{
    this->close();
}

void recordsMgmt::on_resetCurretnInput_clicked()
{
    ui->accountNumber->clear();
    ui->Description->clear();
    ui->userName->clear();
    ui->credit_debit->clear();
    ui->Date->clear();
    ui->checkNo->clear();
    ui->previousBalance->clear();
}

void recordsMgmt::on_previousBalance_editingFinished()
{
    previousBalance = ui->previousBalance->text();
}

void recordsMgmt::on_displayRecords_clicked()
{

    QString displayStr =  accountNumber + "checking account no # " + QString::fromStdString(std::to_string(loopSize)) + "\n " + checkNo + "  " + date +"   "  + description  +  "   "  + credit_debit + " \n Previous balance: "  + previousBalance +	"  New balance:  " +  QString::fromStdString(std::to_string(previousBalance.toInt() + credit_debit.toInt())) + "\n";

    QMessageBox msgBox;
    msgBox.setText("Data Dsiplay Window");
    msgBox.setInformativeText(displayStr);
    msgBox.setStandardButtons(QMessageBox::Close);
    msgBox.setDefaultButton(QMessageBox::Close);
    int ret = msgBox.exec();

    switch(ret)
    {
        case QMessageBox::Close:
            msgBox.close();
            break;
        default:
            break;
    }
}
