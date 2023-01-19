#ifndef QPERSON_H
#define QPERSON_H

#include <QObject>
#include <QString>

class qperson : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author","Arxibye")
    Q_CLASSINFO("company","NCHL")
    Q_CLASSINFO("verson","1.0")
public:
    explicit qperson(QObject *parent = nullptr);
    void incAge();
    void setAge(unsigned age);
public:
    unsigned m_age = 10;
    QString sex = "男";
signals:
    void ageChanged();
};

#endif // QPERSON_H
