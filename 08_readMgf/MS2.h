#ifndef MS2_H
#define MS2_H

#include <QObject>
#include <QList>

class ms2 : public QObject
{
    Q_OBJECT
public:
    explicit ms2(QObject *parent = nullptr);
    void readMgf(QString file_name);
    void count();
signals:
    void sendArray(QList<int> List);
//    void sendArray(QList<int> List);

};

#endif // MS2_H
