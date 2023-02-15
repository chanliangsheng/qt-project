#include <QThread>
#include <QDebug>
#include "MS2.h"
#include <fstream>
#include <QPair>
#include <QTime>


MS2::MS2(QObject *parent) : QObject(parent)
{

}

void MS2::readMgf(QString fileName)
{
    using namespace std;
    qDebug() << "现在的工作线程是:" << QThread::currentThread();
    QTime timedebuge;//声明一个时钟对象
    timedebuge.start();//开始计时


    ifstream ifs;
    MS2List = new QList<singleMS2>;//定义结果
    ifs.open(fileName.toStdString() , ios::in);//以读取的方式打开文件


        string buf;//存储每一行的字符
        string buf_inside;
        while (getline(ifs , buf))
        {
            int count = 1;
            singleMS2 mySingleMS2;//新建一个m类
            while (buf == "BEGIN IONS")
            {
                getline(ifs , buf_inside);//读取下一行
                if(buf_inside == "END IONS"){
                    MS2List->push_back(mySingleMS2);
                    break;
                }
                //如果是END IONS行，则退出这个while,将对象m追加到store中
                count ++;
                if (count == 2)
                {
                    continue;
                }
                //如果是BEGIN IONS的下一行，则不把信息载入
                if (count == 3)
                {
                   int pos = buf_inside.find_first_of("=");//找到等号的位置
                   double rt = stod(buf_inside.substr(pos + 1));//把字符串转化成double
                   mySingleMS2.m_rt = rt;//设置rt
                }
                //如果是第三行，则提取rt放入对象m中
                if(count == 4){
                    int equal_pos = buf_inside.find_first_of("=");
                    buf_inside = buf_inside.substr(equal_pos + 1);//去除等号前面的部分
                    int pos = buf_inside.find_first_of(" ");//找到空格的位置
                    double mz = stod(buf_inside.substr(0, pos));
                    double intensity = stod(buf_inside.substr(pos + 1));//生成前体离子的mz和intensity
                    // m.set_Precursor_ion();
                    mySingleMS2.m_Precursor_ion = QPair<double , double>(mz , intensity);
                }

                if (count == 5)
                {
                    int pos = buf_inside.find_first_of("=");//找到等号的位置
                    if (pos > 0)
                    {
                        continue;
                    }//如果里面又等号，说明不是mz和intensity
                    else{
                        pos = buf_inside.find_first_of(" ");//找到空格的位置
                        double mz = stod(buf_inside.substr(0, pos));
                        double intensity = stod(buf_inside.substr(pos + 1));
                        mySingleMS2.m_Fragment_ion.push_back(QPair<double,double>(mz,intensity));
                        //往对象m追加属性到碎片的信息中
                    }
                }

                if (count > 5)
                {
                    int pos = buf_inside.find_first_of(" ");//找到空格的位置
                    double mz = stod(buf_inside.substr(0, pos));
                    double intensity = stod(buf_inside.substr(pos + 1));
                    mySingleMS2.m_Fragment_ion.push_back(QPair<double,double>(mz,intensity));
//                     往对象m追加属性到碎片的信息中
                }

            }//如果读取到BEGIN IONS，则进行这些操作
        }
        ifs.close();//关闭文件
    qDebug()<<"第一段程序耗时："<<timedebuge.elapsed()/1000.0<<"s";//输出计时
    emit sendMS2(MS2List);//发送信息
    qDebug() << "发送信息";
}
