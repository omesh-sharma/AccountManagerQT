#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ledgerscreen.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    ledgerScreen uiLedgerScreen;


private slots:
    void on_mainEntryButton_clicked();

    void on_mainExitButtoon_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
