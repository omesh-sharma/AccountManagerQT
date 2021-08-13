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

//    bool allowMerge= false;

//    if(accountsVectors.size() !=0)
//    {
//        if ( std::find(accountsVectors.begin(), accountsVectors.end(), accountNumber.toStdString()) != accountsVectors.end() )
//        {
//            allowMerge= true;
//        }
//    }

//    if(!allowMerge)
//    {
//        finalMasterSaver+="\n\n  " + accountNumber.toStdString() + "   checking account no # " + std::to_string(loopSize) + "\n";
//        finalMasterSaver+=checkNo.toStdString() + "ok note   " + date.toStdString() + "       " + description.toStdString() + "   " + credit_debit.toStdString() + "\n";
//    }
//    else if(previousAcc!="" && previousAcc!=accountNumber.toStdString())
//    {
//        finalMasterSaver+="\n\n  " + accountNumber.toStdString() + "   checking account no # " + std::to_string(loopSize) + "\n";

//        finalMasterSaver+=checkNo.toStdString() + "ok note   " + date.toStdString() + "       " + description.toStdString() + "   " + credit_debit.toStdString() + "\n";

//        finalMasterSaver += "\nPrevious balance: " + previousBalance.toStdString() + "\t" + "New balance: " + std::to_string(previousBalance.toInt() + credit_debit.toInt());
//        finalMasterSaver += "\n___________________________________________________________________________________________________\n";

//    }
//    else{
//        finalMasterSaver+=checkNo.toStdString() + "ok note   " + date.toStdString() + "       " + description.toStdString() + "   " + credit_debit.toStdString() + "\n";
//    }

//    bool repetive=false;




//    if(loopSize==0)
//    {
//        finalMasterSaver += "\nPrevious balance: " + previousBalance.toStdString() + "\t" + "New balance: " + std::to_string(previousBalance.toInt() + credit_debit.toInt());
//        finalMasterSaver += "\n___________________________________________________________________________________________________\n";
//    }

//    if(loopSize==0)
    {
    fstream fout;

        // opens an existing csv file or creates a new file.
        fout.open("Master.txt",ios::out | ios::app);

        fout<<finalMasterSaver;


        fout << "\n\n  " << accountNumber.toStdString() << "   checking account no # " << loopSize << "\n";

        fout << checkNo.toStdString() <<"ok note   " << date.toStdString() << "       " << description.toStdString() << "   " << credit_debit.toStdString() << "\n";


        fout << "\nPrevious balance: " << previousBalance.toStdString() << "\t" << "New balance: " << previousBalance.toInt() + credit_debit.toInt();
        fout << "\n___________________________________________________________________________________________________\n";

        fout.close();
    }

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

            savingMaster();

            accountsVectors.push_back(accountNumber.toStdString());

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

    QString displayStr = "323424   checking account no # " + QString::fromStdString(std::to_string(loopSize)) + "\n " + checkNo + "  " + date +"   "  + description  +  "   "  + credit_debit + " \n Previous balance: "  + previousBalance +	"  New balance:  " +  QString::fromStdString(std::to_string(previousBalance.toInt() + credit_debit.toInt())) + "\n";

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
