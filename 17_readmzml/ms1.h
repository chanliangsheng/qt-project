#ifndef MS1_H
#define MS1_H


class ms1
{
public:
    ms1();
    ms1(float &mz , float &intensity , float &rt);
public:
    float m_mz = 0;
    float m_intensity = 0;
    float m_rt = 0;
    float m_rt_min = 0;
    float m_rt_max = 0;
};

#endif // MS1_H
