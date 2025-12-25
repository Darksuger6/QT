#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QWebEngineView>
#include <QWebChannel>
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // qputenv("QTWEBENGINE_REMOTE_DEBUGGING", "7777");    // 远程debug
    _myChannel  = new myChannel(this);
    _startModel = new QStandardItemModel(this);
    _endModel   = new QStandardItemModel(this);

    //新建一个webchannel
    QWebChannel* web_channel = new QWebChannel(this);
    web_channel->registerObject("qtChannel",_myChannel);

    ui->webengineview->page()->setWebChannel(web_channel);
    ui->webengineview->load(QUrl("qrc:/mymap_ba.html"));
    ui->listView->setModel(_startModel);
    ui->listView_2->setModel(_endModel);

    QObject::connect(_myChannel, &myChannel::routeError, [this](QString msg){
        QMessageBox::critical(this, "坐标错误", msg);
    });

    QObject::connect(ui->pushButton_setcity, &QPushButton::clicked, this, &MainWindow::setCity);
    QObject::connect(_myChannel, &myChannel::setCityLable, [this](QString city) {
        ui->label_city->setText(QString::fromLocal8Bit("city:") + city);
    });


    QObject::connect(_myChannel,&myChannel::sendAutocomplete_1,this,&MainWindow::setAutoComplete_1);
    QObject::connect(ui->lineEdit_search,&QLineEdit::textEdited,this,&MainWindow::searhInputChanged_1);

    QObject::connect(_myChannel,&myChannel::sendAutocomplete_2,this,&MainWindow::setAutoComplete_2);
    QObject::connect(ui->lineEdit_search_2,&QLineEdit::textEdited,this,&MainWindow::searhInputChanged_2);

    QObject::connect(ui->listView, &QListView::clicked, [this](const QModelIndex &index) {
        QJsonObject location;
        location["location"] = index.data(Qt::UserRole).toString();
        qDebug() << "startlocation:" << location["location"].toString(); // 添加调试输出
        this->set_startlocation(location);
    });

    QObject::connect(ui->listView_2, &QListView::clicked, [this](const QModelIndex &index) {
        QJsonObject location;
        location["location"] = index.data(Qt::UserRole).toString();
        qDebug() << "endlocation:" << location["location"].toString(); // 添加调试输出
        this->set_endlocation(location);
    });

    QObject::connect(ui->navButton, &QPushButton::clicked, this, &MainWindow::on_navButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/**************************QT槽函数**************************/
void MainWindow::setCity()
{
    QString city = ui->lineEdit_setcity->text().trimmed();
    if (city.size() == 0)
    {
        QMessageBox::warning(this,"Warning","please enter a city!");
        return;
    }
    _myChannel->setCity(city);
}

void MainWindow::searhInputChanged_1(QString cont)
{
    cont = ui->lineEdit_search->text().trimmed();
    _myChannel->inputChanged_1(cont);
}

void MainWindow::searhInputChanged_2(QString cont)
{
    cont = ui->lineEdit_search_2->text().trimmed();
    _myChannel->inputChanged_2(cont);
}

void MainWindow::set_startlocation(QJsonObject location)
{
    QString locationStr = location["location"].toString();
    _myChannel->startlocation(locationStr);
    checkRouteStatus();
}

void MainWindow::set_endlocation(QJsonObject location)
{
    QString locationStr = location["location"].toString();
    _myChannel->endlocation(locationStr);
    checkRouteStatus();
}
/**************************自动补全函数**************************/
void MainWindow::setAutoComplete_1(QJsonObject result) {
    _startModel->clear();
    // 验证数据结构
    if (!result.contains("tips") || !result["tips"].isArray()) {
        qWarning() << "无效的JSON结构";
        return;
    }

    QJsonArray tips = result["tips"].toArray();
    for (const auto& e : tips) {
        QJsonObject d = e.toObject();
        if (d.contains("name") && d.contains("location")) {
            QJsonObject locationObj = d["location"].toObject();
            // 提取经纬度
            double lng = locationObj["lng"].toDouble();
            double lat = locationObj["lat"].toDouble();

            QString locationStr = QString("%1,%2")
                                      .arg(lng, 0, 'f', 6)
                                      .arg(lat, 0, 'f', 6);
            QStandardItem *item = new QStandardItem(d["name"].toString());
            //     QString s = d["name"].toString();
            //     QStandardItem *item = new QStandardItem(s);
            item->setData(locationStr, Qt::UserRole); // 存储经纬度字符串
            _startModel->appendRow(item);
        }


    }
}

void MainWindow::setAutoComplete_2(QJsonObject result) {
    _endModel->clear();
    // 验证数据结构
    if (!result.contains("tips") || !result["tips"].isArray()) {
        qWarning() << "无效的JSON结构";
        return;
    }
    QJsonArray tips = result["tips"].toArray();
    for (const auto& e : tips) {
        QJsonObject d = e.toObject();
        if (d.contains("name") && d.contains("location")) {
            QJsonObject locationObj = d["location"].toObject();
            double lng = locationObj["lng"].toDouble();
            double lat = locationObj["lat"].toDouble();

            QString locationStr = QString("%1,%2").arg(lng, 0, 'f', 6).arg(lat, 0, 'f', 6);
            QStandardItem *item = new QStandardItem(d["name"].toString());
            //     QString s = d["name"].toString();
            //     QStandardItem *item = new QStandardItem(s);
            item->setData(locationStr, Qt::UserRole);
            _endModel->appendRow(item);
        }
    }
}
/*************************************************************/

void MainWindow::on_navButton_clicked()
{
    if (_startModel->rowCount() == 0 || _endModel->rowCount() == 0) {
        QMessageBox::warning(this, "Warning", "请先设置起点和终点！");
        return;
    }
    _myChannel->selectRoute();
}

void MainWindow::checkRouteStatus()
{
    if (_startModel->rowCount() > 0 && _endModel->rowCount() > 0) {
        ui->navButton->setEnabled(true);
    } else {
        ui->navButton->setEnabled(false);
    }
}
