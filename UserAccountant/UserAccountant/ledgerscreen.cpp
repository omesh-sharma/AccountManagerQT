#include "ledgerscreen.h"
#include "ui_ledgerscreen.h"

ledgerScreen::ledgerScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ledgerScreen)
{
    ui->setupUi(this);

    connect(&uiRecordsMgmt, SIGNAL(recorsScreenTriggered()),this,SLOT(on_pushButton_clicked()));

}

ledgerScreen::~ledgerScreen()
{
    delete ui;
}

void ledgerScreen::on_recordsInput_editingFinished()
{
    recordsSize =  ui->recordsInput->text().toInt();

}

void ledgerScreen::on_pushButton_2_clicked()
{
    close();
}

void ledgerScreen::on_pushButton_clicked()
{
    ui->pushButton->setStyleSheet("background-color:red");


     if(recordsSize>0)
     {
        this->hide();
        uiRecordsMgmt.loopSize = recordsSize-1;
        uiRecordsMgmt.show();
     }

}
