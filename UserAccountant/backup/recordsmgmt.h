#ifndef RECORDSMGMT_H
#define RECORDSMGMT_H

#include <QDebug>
#include <QWidget>
#include <iostream>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;



namespace Ui {
class recordsMgmt;
}

class recordsMgmt : public QWidget
{
    Q_OBJECT

public:
    explicit recordsMgmt(QWidget *parent = 0);
    ~recordsMgmt();

    int loopSize = 0;

    int balance[10] = {500,1500,1300,700,500,2300,2300,1000,500,500};

    QString accountNumber, name, description, date, checkNo, credit_debit, previousBalance;

    string finalMasterSaver="", previousAcc="";

    vector<string> accountsVectors;

    void savingLedger();

    void savingMaster();

signals:
    void recorsScreenTriggered();

    void showNextScreen();

private slots:
    void on_accountNumber_editingFinished();

    void on_userName_editingFinished();

    void on_Description_editingFinished();

    void on_Date_editingFinished();

    void on_checkNo_editingFinished();

    void on_credit_debit_cursorPositionChanged(int arg1, int arg2);

    void on_saveRecords_clicked();

    void on_exitMainRecords_clicked();

    void on_resetCurretnInput_clicked();

    void on_previousBalance_editingFinished();

    void on_displayRecords_clicked();

private:
    Ui::recordsMgmt *ui;
};

#endif // RECORDSMGMT_H
