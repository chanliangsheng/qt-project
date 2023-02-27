#ifndef MS2_H
#define MS2_H

#include <vector>

class ms2
{
public:
    ms2();
public:
    //前体离子的信息
    double m_Precursor_ion_mz = 0;
    double m_Precursor_ion_intensity = 0;
    double m_Rt;
    //碎片离子的信息
    std::vector<double> m_Fragment_ion_mz;
    std::vector<double> m_Fragment_ion_intensity;
};

#endif // MS2_H
