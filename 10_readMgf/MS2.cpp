#include "MS2.h"
#include <QFile>
#include <QList>
#include <QThread>
#include <QDebug>

MS2::MS2(QObject *parent) : QObject(parent)
{

}

void MS2::readMgf(QString fileName)
{
    qDebug() << "现在的工作线程是:" << QThread::currentThread();
    QFile path(fileName);//把文件的名字转化为QFile类型

    path.open(QIODevice::ReadOnly);//以只读的方式打开文件

    MS2List = new QList<singleMS2>;//定义结果

    while(!path.atEnd()){
        if(path.readLine() == "BEGIN IONS\n"){
            singleMS2 *new_singleMS2 = new singleMS2;
            new_singleMS2->push_back("d");

            MS2List->push_back(*new_singleMS2);//里面存储的是singleMS2
        }
    }
    //追加信息到List中


    emit sendMS2(MS2List);//发送信息
    qDebug() << "发送信息";

}
