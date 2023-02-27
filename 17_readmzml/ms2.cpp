#include "ms2.h"

ms2::ms2()
{

}

ms2::ms2(float precursor_ion_mz, float precursor_ion_intensity, float rt, std::vector<float> &fragment_ion_mz, std::vector<float> &fragment_ion_intensity)
{
    //有参构造函数
    this->m_rt = rt;
    this->m_fragment_ion_mz = fragment_ion_mz;
    this->m_precursor_ion_mz = precursor_ion_mz;
    this->m_fragment_ion_intensity = fragment_ion_intensity;
    this->m_precursor_ion_intensity = precursor_ion_intensity;
}
