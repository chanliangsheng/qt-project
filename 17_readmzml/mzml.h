#ifndef MZML_H
#define MZML_H

#include "ms1.h"
#include "ms2.h"
#include <QObject>
#include <QString>
#include <tinyxml2.h>
#include <QDebug>


class mzml: public QObject
{
    Q_OBJECT
public:
    mzml(QObject *parent = nullptr);
public:
    //所有的ms1和ms2存放的位置
    std::vector<ms1> m_ms1_vector;
    std::vector<ms2> m_ms2_vector;

    //数据的编码与压缩
    const char* bit_type_param = "32-bit float";
    const char* compression_param = "no compression";
public:
    void read_mzml(QString file_name);//读取mzml文件
    void parser_ms1(tinyxml2::XMLElement *spectrum_node);//解析一级节点
    void parser_ms2(tinyxml2::XMLElement *spectrum_node);//解析一级节点
    char get_ms_level(tinyxml2::XMLElement *spectrum_node);//获取该节点是属于一级节点还是二级节点
    void get_encode_compression_param(tinyxml2::XMLElement *spectrum_node);//获取数据编码的压缩的方法
};

#endif // MZML_H
