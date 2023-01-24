#include "ms2.h"
#include <QFile>
#include <QDebug>
#include <QThread>
ms2::ms2(QObject *parent) : QObject(parent)
{

}

void ms2::readMgf(QString file_name)
{
    QFile path(file_name);//定义path
    qDebug() << "filename的地址为"<<&file_name;
    path.open(QIODevice::ReadOnly);//读取文件
    qDebug() << "path的地址为"<<&path;
    QList<int> List ;
    int count = 0;
    qDebug() << "I'm working in thread:" << QThread::currentThreadId();
    while(!path.atEnd()){
        if(path.readLine() == "BEGIN IONS\n"){
            List.push_back(++count);
        }

//        qDebug() << count;
    }
    //读取文件并把索引存储
    qDebug() << "发出读取完毕信号";
    emit sendArray(List);//读取完发出信号
}


