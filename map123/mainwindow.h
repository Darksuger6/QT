#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "myChannel.h"

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // QT²Ûº¯Êý: qt --> myChannel
    void setCity();
    void searhInputChanged_1(QString cont);
    void searhInputChanged_2(QString cont);
    void setAutoComplete_1(QJsonObject result);
    void setAutoComplete_2(QJsonObject result);
    void set_startlocation(QJsonObject startlocation);
    void set_endlocation(QJsonObject endlocation);
    void on_navButton_clicked();
    void checkRouteStatus();

private:
    Ui::MainWindow *ui;
    myChannel * _myChannel;
    QStandardItemModel * _startModel;
    QStandardItemModel * _endModel;
};

#endif // MAINWINDOW_H
