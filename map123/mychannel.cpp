#include "myChannel.h"

myChannel::myChannel(QObject *parent)
    :QObject(parent)
{

}

// emit 发射信号

void myChannel::cityChangeResult(QString result)
{
    emit setCityLable(result);
}

void myChannel::setCity(QString city)
{
    emit cityChanged(city);
}

void myChannel::getAutocomplete_1(QJsonObject result)
{
    emit sendAutocomplete_1(result);
}

void myChannel::getAutocomplete_2(QJsonObject result)
{
    emit sendAutocomplete_2(result);
}
