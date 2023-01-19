#include "qperson.h"
#include <QDebug>

qperson::qperson(QObject *parent) : QObject(parent)
{

}

void qperson::incAge()
{   /*m_age ++ ;*/

    m_age ++ ;
    emit ageChanged();
}//当调用这个函数时，会发出ageChanged信号，ageChanged信号可以与其他槽相连接

void qperson::setAge(unsigned age)
{
    m_age = age;
    emit ageChanged();
}//当调用这个函数时，会发出ageChanged信号，ageChanged信号可以与其他槽相连接
