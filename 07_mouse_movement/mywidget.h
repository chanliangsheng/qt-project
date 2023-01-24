#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = nullptr);
    ~myWidget();

signals:

};

#endif // MYWIDGET_H
