#ifndef MYQTRINGLIST_H
#define MYQTRINGLIST_H
#include <QMouseEvent>

#include <QStringList>

class myQtringList:public QStringList
{
public:
    myQtringList();
    void mousePressEvent(QMouseEvent *ev);
};

#endif // MYQTRINGLIST_H
