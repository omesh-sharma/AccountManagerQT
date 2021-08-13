/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lableHeading;
    QPushButton *mainEntryButton;
    QPushButton *mainExitButtoon;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(662, 415);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color:rgb(2, 65, 65)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lableHeading = new QLabel(centralWidget);
        lableHeading->setObjectName(QStringLiteral("lableHeading"));
        lableHeading->setGeometry(QRect(150, 40, 411, 51));
        lableHeading->setAutoFillBackground(false);
        lableHeading->setStyleSheet(QStringLiteral(""));
        mainEntryButton = new QPushButton(centralWidget);
        mainEntryButton->setObjectName(QStringLiteral("mainEntryButton"));
        mainEntryButton->setGeometry(QRect(140, 200, 171, 25));
        mainExitButtoon = new QPushButton(centralWidget);
        mainExitButtoon->setObjectName(QStringLiteral("mainExitButtoon"));
        mainExitButtoon->setGeometry(QRect(390, 200, 161, 25));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QStringLiteral("background-color:da"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 662, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lableHeading->setText(QApplication::translate("MainWindow", "            Welcome To User Account Manager Main Window", Q_NULLPTR));
        mainEntryButton->setText(QApplication::translate("MainWindow", "Enter Records", Q_NULLPTR));
        mainExitButtoon->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
