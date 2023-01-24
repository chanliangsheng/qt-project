#include "myqthread.h"
#include <QList>
#include <QDebug>
#include <QTime>
#include <algorithm>

random::random(QObject *parent) : QObject(parent)
{

}

void random::working(int nums)
{
    QList<int> list;
    QTime time;
    time.start();
    for(int i = 0 ; i < nums ; ++i){
        list.push_back(qrand()%10000);
    }
    //生成10000个随机数
    emit sendList(list);//发出sendList信号
    qDebug() << "生成完毕！" << "花费时间为：" << time.elapsed() << "毫秒";

}
