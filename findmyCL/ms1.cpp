#include "ms1.h"

ms1::ms1()
{

}

ms1::ms1(float mz, float intensity, float rt)
{
    //有参构造函数
    this->m_mz = mz;
    this->m_intensity = intensity;
    this->m_rt = rt;
}

ms1::ms1(double mz, double intensity, double rt)
{
    //有参构造函数
    this->m_mz = mz;
    this->m_intensity = intensity;
    this->m_rt = rt;
}

ms1::ms1(double mz, double intensity, float rt)
{
    //有参构造函数
    this->m_mz = mz;
    this->m_intensity = intensity;
    this->m_rt = rt;
}
