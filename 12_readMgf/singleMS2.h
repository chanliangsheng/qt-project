#ifndef SINGLEMS2_H
#define SINGLEMS2_H

#endif // SINGLEMS2_H
#include <QString>
#include <QPair>
#include <QList>

class singleMS2
{
public:
    QPair<double , double> m_Precursor_ion = qMakePair(0,0);//前体离子
    double m_rt=0;//保留时间
    QList<QPair<double, double>> m_Fragment_ion;//碎片离子的构成，为一个向量，向量中的成员为pair，每个pair存储mz和对应的intensity
};
