/********************************************************************************
** Form generated from reading UI file 'ledgerscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDGERSCREEN_H
#define UI_LEDGERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ledgerScreen
{
public:
    QLabel *ledgerMainScreenHeading;
    QLabel *userInputLedger;
    QLineEdit *recordsInput;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ledgerScreen)
    {
        if (ledgerScreen->objectName().isEmpty())
            ledgerScreen->setObjectName(QStringLiteral("ledgerScreen"));
        ledgerScreen->resize(714, 461);
        ledgerScreen->setStyleSheet(QStringLiteral("background-color:rgb(41, 113, 4)"));
        ledgerMainScreenHeading = new QLabel(ledgerScreen);
        ledgerMainScreenHeading->setObjectName(QStringLiteral("ledgerMainScreenHeading"));
        ledgerMainScreenHeading->setGeometry(QRect(210, 30, 271, 31));
        ledgerMainScreenHeading->setStyleSheet(QStringLiteral(""));
        userInputLedger = new QLabel(ledgerScreen);
        userInputLedger->setObjectName(QStringLiteral("userInputLedger"));
        userInputLedger->setGeometry(QRect(80, 170, 401, 31));
        userInputLedger->setStyleSheet(QStringLiteral(""));
        recordsInput = new QLineEdit(ledgerScreen);
        recordsInput->setObjectName(QStringLiteral("recordsInput"));
        recordsInput->setGeometry(QRect(550, 170, 61, 31));
        recordsInput->setStyleSheet(QStringLiteral("background-color:rgb(238, 238, 236)"));
        pushButton = new QPushButton(ledgerScreen);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 270, 89, 41));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(ledgerScreen);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 270, 89, 41));
        pushButton_2->setStyleSheet(QStringLiteral(""));

        retranslateUi(ledgerScreen);

        QMetaObject::connectSlotsByName(ledgerScreen);
    } // setupUi

    void retranslateUi(QWidget *ledgerScreen)
    {
        ledgerScreen->setWindowTitle(QApplication::translate("ledgerScreen", "Form", Q_NULLPTR));
        ledgerMainScreenHeading->setText(QApplication::translate("ledgerScreen", "           Welcome to Ledger Screen", Q_NULLPTR));
        userInputLedger->setText(QApplication::translate("ledgerScreen", "Enter the Number of records you want to enter 1,2,3......n", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ledgerScreen", "Next", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ledgerScreen", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ledgerScreen: public Ui_ledgerScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDGERSCREEN_H
