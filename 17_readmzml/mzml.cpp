#include "mzml.h"

mzml::mzml(QObject *parent) : QObject(parent)
{

}

void mzml::read_mzml(QString file_name)
{
    using namespace tinyxml2;
    XMLDocument xml;
    //载入数据,需要类型是char*
    xml.LoadFile(file_name.toStdString().c_str());
    //找到根节点
    XMLElement *root_node = xml.RootElement();
    XMLElement *data_node;
    //检查是否为一个正确的mzml文件
    if(root_node == nullptr){
        qDebug() << "wrong file!";
        return;
    }
    else{
        XMLElement *mzML_node = root_node->FirstChildElement("mzML");
        if(mzML_node == nullptr){
            qDebug() << "wrong file!";
            return;
        }
        else{
            XMLElement *run_node = mzML_node->FirstChildElement("run");
            if(run_node == nullptr){
                qDebug() << "wrong file!";
                return;
            }
            else{
                data_node = run_node->FirstChildElement("spectrumList");
                if(data_node == nullptr){
                    qDebug() << "wrong file!";
                    return;
                }
            }
        }
    }

    //遍历所有的spectrum节点，读取信息
    for(XMLElement *spectrum_node = data_node->FirstChildElement("spectrum") ; spectrum_node != nullptr ; spectrum_node = spectrum_node->NextSiblingElement()){
        char ms_level = this->get_ms_level(spectrum_node);//获取ms_level信息
        if(ms_level == '1'){

        }
        else if (ms_level == '2') {

        }
    }

}

void mzml::parser_ms1(tinyxml2::XMLElement* spectrum_node)
{
    using namespace tinyxml2;

    //获取保留时间，单位为分钟
    const char* rt = spectrum_node->FirstChildElement("scanList")->FirstChildElement("scan")->FirstChildElement("cvParam")->Attribute("value");

    //获取mz节点和intensity节点
    XMLElement* mz_node = spectrum_node->FirstChildElement("binaryDataArrayList")->FirstChildElement();
    XMLElement* intensity_node = mz_node->NextSiblingElement();




}

char mzml::get_ms_level(tinyxml2::XMLElement *spectrum_node)
{
    auto ms_level_node = spectrum_node->FirstChildElement();//找第一个子节点
    while (true) {
        //如果已经遍历完所有的节点，还是没有找到mslevel这个节点，则返回'0'
        if(ms_level_node == nullptr){
            return '0';
        }

        //寻找name这个属性
        auto name_attribute = ms_level_node->Attribute("name");

        //如果找不到name属性，则到达下一个节点；如果能找到name属性，则获取value属性
        if(name_attribute == nullptr){
            ms_level_node = ms_level_node->NextSiblingElement();
        }
        else{
            const char* ms_level = ms_level_node->Attribute("value");
            if(*ms_level == '1'){
                return '1';
            }
            else if(*ms_level == '2'){
                return '2';
            }
        }
    }
}

void mzml::get_encode_compression_param(tinyxml2::XMLElement *spectrum_node)
{
    using namespace tinyxml2;

    //获取存放数据的节点
    XMLElement* data_node = spectrum_node->FirstChildElement("binaryDataArrayList")->FirstChildElement("binaryDataArray");

    //二进制数据的类型和压缩的方法
    this->bit_type_param = data_node->FirstChildElement()->Attribute("name");
    this->compression_param = data_node->FirstChildElement()->NextSiblingElement()->Attribute("name");
}
