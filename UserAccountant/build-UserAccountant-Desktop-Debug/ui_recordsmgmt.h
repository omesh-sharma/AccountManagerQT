/********************************************************************************
** Form generated from reading UI file 'recordsmgmt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDSMGMT_H
#define UI_RECORDSMGMT_H

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

class Ui_recordsMgmt
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *accountNumber;
    QLineEdit *userName;
    QLineEdit *Description;
    QLineEdit *Date;
    QLineEdit *checkNo;
    QLineEdit *credit_debit;
    QPushButton *saveRecords;
    QPushButton *displayRecords;
    QPushButton *exitMainRecords;
    QPushButton *resetCurretnInput;
    QLabel *label_8;
    QLineEdit *previousBalance;

    void setupUi(QWidget *recordsMgmt)
    {
        if (recordsMgmt->objectName().isEmpty())
            recordsMgmt->setObjectName(QStringLiteral("recordsMgmt"));
        recordsMgmt->resize(712, 456);
        recordsMgmt->setStyleSheet(QStringLiteral("background-color:rgb(66, 82, 5)"));
        label = new QLabel(recordsMgmt);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 30, 67, 17));
        label_2 = new QLabel(recordsMgmt);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 131, 17));
        label_3 = new QLabel(recordsMgmt);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 101, 17));
        label_4 = new QLabel(recordsMgmt);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 240, 131, 17));
        label_5 = new QLabel(recordsMgmt);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 141, 17));
        label_6 = new QLabel(recordsMgmt);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 200, 67, 17));
        label_7 = new QLabel(recordsMgmt);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 290, 121, 17));
        accountNumber = new QLineEdit(recordsMgmt);
        accountNumber->setObjectName(QStringLiteral("accountNumber"));
        accountNumber->setGeometry(QRect(510, 90, 171, 25));
        accountNumber->setStyleSheet(QStringLiteral("background-color:white"));
        userName = new QLineEdit(recordsMgmt);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(510, 130, 171, 25));
        userName->setStyleSheet(QStringLiteral("background-color:white"));
        Description = new QLineEdit(recordsMgmt);
        Description->setObjectName(QStringLiteral("Description"));
        Description->setGeometry(QRect(510, 170, 171, 25));
        Description->setStyleSheet(QStringLiteral("background-color:white"));
        Date = new QLineEdit(recordsMgmt);
        Date->setObjectName(QStringLiteral("Date"));
        Date->setGeometry(QRect(510, 210, 171, 25));
        Date->setStyleSheet(QStringLiteral("background-color:white"));
        checkNo = new QLineEdit(recordsMgmt);
        checkNo->setObjectName(QStringLiteral("checkNo"));
        checkNo->setGeometry(QRect(510, 250, 171, 25));
        checkNo->setStyleSheet(QStringLiteral("background-color:white"));
        credit_debit = new QLineEdit(recordsMgmt);
        credit_debit->setObjectName(QStringLiteral("credit_debit"));
        credit_debit->setGeometry(QRect(510, 290, 171, 25));
        credit_debit->setStyleSheet(QStringLiteral("background-color:white"));
        saveRecords = new QPushButton(recordsMgmt);
        saveRecords->setObjectName(QStringLiteral("saveRecords"));
        saveRecords->setGeometry(QRect(100, 380, 151, 25));
        displayRecords = new QPushButton(recordsMgmt);
        displayRecords->setObjectName(QStringLiteral("displayRecords"));
        displayRecords->setGeometry(QRect(290, 380, 89, 25));
        exitMainRecords = new QPushButton(recordsMgmt);
        exitMainRecords->setObjectName(QStringLiteral("exitMainRecords"));
        exitMainRecords->setGeometry(QRect(580, 420, 89, 25));
        resetCurretnInput = new QPushButton(recordsMgmt);
        resetCurretnInput->setObjectName(QStringLiteral("resetCurretnInput"));
        resetCurretnInput->setGeometry(QRect(430, 380, 141, 25));
        label_8 = new QLabel(recordsMgmt);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 340, 121, 17));
        previousBalance = new QLineEdit(recordsMgmt);
        previousBalance->setObjectName(QStringLiteral("previousBalance"));
        previousBalance->setGeometry(QRect(510, 330, 171, 25));
        previousBalance->setStyleSheet(QStringLiteral("background-color:white"));

        retranslateUi(recordsMgmt);

        QMetaObject::connectSlotsByName(recordsMgmt);
    } // setupUi

    void retranslateUi(QWidget *recordsMgmt)
    {
        recordsMgmt->setWindowTitle(QApplication::translate("recordsMgmt", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("recordsMgmt", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("recordsMgmt", "AccontNumber", Q_NULLPTR));
        label_3->setText(QApplication::translate("recordsMgmt", "Name", Q_NULLPTR));
        label_4->setText(QApplication::translate("recordsMgmt", "Check No", Q_NULLPTR));
        label_5->setText(QApplication::translate("recordsMgmt", "Description", Q_NULLPTR));
        label_6->setText(QApplication::translate("recordsMgmt", "Date", Q_NULLPTR));
        label_7->setText(QApplication::translate("recordsMgmt", "Credit/Debit", Q_NULLPTR));
        saveRecords->setText(QApplication::translate("recordsMgmt", "Enter Next Records", Q_NULLPTR));
        displayRecords->setText(QApplication::translate("recordsMgmt", "Dsiplay", Q_NULLPTR));
        exitMainRecords->setText(QApplication::translate("recordsMgmt", "Exit", Q_NULLPTR));
        resetCurretnInput->setText(QApplication::translate("recordsMgmt", "reset Current Input", Q_NULLPTR));
        label_8->setText(QApplication::translate("recordsMgmt", "Previous Balance", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class recordsMgmt: public Ui_recordsMgmt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDSMGMT_H
