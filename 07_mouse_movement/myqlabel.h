#ifndef MYQLABEL_H
#define MYQLABEL_H

#include <QWidget>
#include <QLabel>

class myQlabel : public QLabel
{
    Q_OBJECT
public:
    explicit myQlabel(QWidget *parent = nullptr);
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
    void mousePressEvent(QMouseEvent *ev);


signals:

};

#endif // MYQLABEL_H
