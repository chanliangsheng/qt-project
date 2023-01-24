#include "mywidget.h"
#include <QDebug>

myWidget::myWidget(QWidget *parent) : QWidget(parent)
{
    qDebug() << "myWidget的构造函数";
}

myWidget::~myWidget()
{
    qDebug() << "myWidget的析构函数";
}
