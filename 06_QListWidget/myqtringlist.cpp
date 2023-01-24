#include "myqtringlist.h"
#include <QDebug>

myQtringList::myQtringList()
{

}

void myQtringList::mousePressEvent(QMouseEvent *ev)
{
    Q_UNUSED(ev);
    qDebug() << "i am cilciljasd";
}
