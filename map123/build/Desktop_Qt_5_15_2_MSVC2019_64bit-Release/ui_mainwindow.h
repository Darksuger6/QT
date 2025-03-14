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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWebEngineView *webengineview;
    QPushButton *navButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_setcity;
    QHBoxLayout *horizontalLayout;
    QLabel *label_city;
    QPushButton *pushButton_setcity;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *startlabel;
    QLineEdit *lineEdit_search;
    QListView *listView;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *endabel;
    QLineEdit *lineEdit_search_2;
    QListView *listView_2;
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
        navButton = new QPushButton(centralwidget);
        navButton->setObjectName(QString::fromUtf8("navButton"));
        navButton->setGeometry(QRect(850, 500, 93, 28));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(777, 10, 241, 64));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_setcity = new QLineEdit(layoutWidget);
        lineEdit_setcity->setObjectName(QString::fromUtf8("lineEdit_setcity"));

        verticalLayout->addWidget(lineEdit_setcity);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_city = new QLabel(layoutWidget);
        label_city->setObjectName(QString::fromUtf8("label_city"));

        horizontalLayout->addWidget(label_city);

        pushButton_setcity = new QPushButton(layoutWidget);
        pushButton_setcity->setObjectName(QString::fromUtf8("pushButton_setcity"));

        horizontalLayout->addWidget(pushButton_setcity);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(777, 80, 241, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        startlabel = new QLabel(layoutWidget1);
        startlabel->setObjectName(QString::fromUtf8("startlabel"));

        horizontalLayout_2->addWidget(startlabel);

        lineEdit_search = new QLineEdit(layoutWidget1);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));

        horizontalLayout_2->addWidget(lineEdit_search);


        verticalLayout_2->addLayout(horizontalLayout_2);

        listView = new QListView(layoutWidget1);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setEnabled(true);

        verticalLayout_2->addWidget(listView);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(777, 280, 241, 191));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        endabel = new QLabel(layoutWidget2);
        endabel->setObjectName(QString::fromUtf8("endabel"));

        horizontalLayout_3->addWidget(endabel);

        lineEdit_search_2 = new QLineEdit(layoutWidget2);
        lineEdit_search_2->setObjectName(QString::fromUtf8("lineEdit_search_2"));

        horizontalLayout_3->addWidget(lineEdit_search_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        listView_2 = new QListView(layoutWidget2);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));

        verticalLayout_3->addWidget(listView_2);

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
        navButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\257\274\350\210\252", nullptr));
        label_city->setText(QCoreApplication::translate("MainWindow", "city:", nullptr));
        pushButton_setcity->setText(QCoreApplication::translate("MainWindow", "SetCity", nullptr));
        startlabel->setText(QCoreApplication::translate("MainWindow", "\350\265\267\347\202\271\357\274\232", nullptr));
        endabel->setText(QCoreApplication::translate("MainWindow", "\347\273\210\347\202\271\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
