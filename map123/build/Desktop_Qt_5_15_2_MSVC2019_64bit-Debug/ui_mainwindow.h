/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWebEngineView *webengineview;
    QPushButton *pushButton_setcity;
    QLineEdit *lineEdit_setcity;
    QLabel *label_city;
    QLabel *label_2;
    QLineEdit *lineEdit_search;
    QListView *listView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        webengineview = new QWebEngineView(centralwidget);
        webengineview->setObjectName(QString::fromUtf8("webengineview"));
        webengineview->setGeometry(QRect(10, 0, 761, 551));
        webengineview->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
""));
        pushButton_setcity = new QPushButton(centralwidget);
        pushButton_setcity->setObjectName(QString::fromUtf8("pushButton_setcity"));
        pushButton_setcity->setGeometry(QRect(910, 60, 93, 28));
        lineEdit_setcity = new QLineEdit(centralwidget);
        lineEdit_setcity->setObjectName(QString::fromUtf8("lineEdit_setcity"));
        lineEdit_setcity->setGeometry(QRect(790, 20, 221, 31));
        label_city = new QLabel(centralwidget);
        label_city->setObjectName(QString::fromUtf8("label_city"));
        label_city->setGeometry(QRect(790, 100, 69, 19));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(790, 170, 69, 19));
        lineEdit_search = new QLineEdit(centralwidget);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(790, 210, 221, 31));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(790, 260, 221, 281));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_setcity->setText(QCoreApplication::translate("MainWindow", "SetCity", nullptr));
        label_city->setText(QCoreApplication::translate("MainWindow", "city:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Search:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
