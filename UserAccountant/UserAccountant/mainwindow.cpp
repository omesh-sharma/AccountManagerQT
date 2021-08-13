#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&uiLedgerScreen, SIGNAL(ledgerWindowTriggered()),this,SLOT(on_mainEntryButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
    this->close();
}

void MainWindow::on_mainEntryButton_clicked()
{
    ui->mainEntryButton->setStyleSheet("background-color:red");

    uiLedgerScreen.show();

    this->hide();
}

void MainWindow::on_mainExitButtoon_clicked()
{
    this->close();
}
