#ifndef MYQTHREAD_H
#define MYQTHREAD_H

#include <QObject>
#include <QThread>

class random : public QObject
{
    Q_OBJECT
public:
    explicit random(QObject *parent = nullptr);
    void sortlist(QList<int> list);
    void working(int nums);

signals:
    void sendList(QList<int>);
};

#endif // MYQTHREAD_H
