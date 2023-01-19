#include "myqlabel.h"
#include <QDebug>

myQlabel::myQlabel(QWidget *parent) : QLabel(parent)
{

}

void myQlabel::enterEvent(QEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "鼠标进入了";
}

void myQlabel::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "鼠标离开了";
}

void myQlabel::mousePressEvent(QMouseEvent *ev)
{
    Q_UNUSED(ev);

    this->text();
    qDebug() << "鼠标点击了:" << this->text();
}
