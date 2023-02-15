#ifndef MS2_H
#define MS2_H

#include <QObject>
#include <QString>
#include <QPair>
#include <QList>
#include "singleMS2.h"
#include <QVector>

class MS2 : public QObject,public singleMS2
{
    Q_OBJECT
public:
    explicit MS2(QObject *parent = nullptr);
    void readMgf(QString fileName);
public:
    QList<singleMS2> *MS2List;
signals:
    void sendMS2(QList<singleMS2> *MS2List);//发送已经读取完的信息
};

#endif // MS2_H
