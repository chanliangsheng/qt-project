#ifndef MYQLABEL_H
#define MYQLABEL_H

#include <QWidget>
#include <QLabel>
#include "mywidget.h"

class myQlabel : public QLabel
{
    Q_OBJECT
public:
    explicit myQlabel(QWidget *parent = nullptr);
    ~myQlabel();
    void mousePressEvent(QMouseEvent *ev);
private:
    myWidget *mydiget;
};

#endif // MYQLABEL_H
