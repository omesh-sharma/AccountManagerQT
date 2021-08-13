#ifndef LEDGERSCREEN_H
#define LEDGERSCREEN_H

#include <QWidget>
#include <recordsmgmt.h>

namespace Ui {
class ledgerScreen;
}

class ledgerScreen : public QWidget
{
    Q_OBJECT

public:
    explicit ledgerScreen(QWidget *parent = 0);
    ~ledgerScreen();

    recordsMgmt uiRecordsMgmt;

    int recordsSize = 0;

signals:
    void ledgerWindowTriggered();

private slots:

    void on_recordsInput_editingFinished();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ledgerScreen *ui;
};

#endif // LEDGERSCREEN_H
