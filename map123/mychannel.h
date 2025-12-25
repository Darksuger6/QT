#ifndef __MYCHANNEL_H__
#define __MYCHANNEL_H__

#include <QWebChannel>
#include <QJsonObject>

class myChannel :public QObject
{
    Q_OBJECT
public:
    explicit myChannel(QObject* parent=nullptr);

    // QT槽函数: qt --> myChannel
    void setCity(QString city);

signals:
    // QT发送信号: myChannel --> html
    void cityChanged(QString city);
    void inputChanged_1(QString input);
    void inputChanged_2(QString input);
    void startlocation(QString location);
    void endlocation(QString location);
    void selectRoute();

public slots:
    // 反应函数: html--> myChannel
    void cityChangeResult(QString result);
    void getAutocomplete_1(QJsonObject result);
    void getAutocomplete_2(QJsonObject result);

signals:
    // QT到达信号: myChannel --> qt
    void setCityLable(QString city);
    void sendAutocomplete_1(QJsonObject autocom);
    void sendAutocomplete_2(QJsonObject autocom);
    void routeError(QString message);
};

#endif
