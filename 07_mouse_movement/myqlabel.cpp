#include "myqlabel.h"
#include <QDebug>
#include <QWidget>

myQlabel::myQlabel(QWidget *parent) : QLabel(parent)
{

}

myQlabel::~myQlabel()
{
//    qDebug() << "析构";


}

void myQlabel::mousePressEvent(QMouseEvent *ev)
{
    Q_UNUSED(ev);

    this->text();
    qDebug() << "鼠标点击了:" << this->text();


    this->mydiget = new myWidget();

    mydiget->setAttribute(Qt::WA_QuitOnClose , false);

    mydiget->setAttribute(Qt::WA_DeleteOnClose);
    mydiget->show();

}


