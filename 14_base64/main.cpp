#include "widget.h"
#include "QDebug"
#include <QString>
#include <QByteArray>
#include <QApplication>
#include <zlib.h>


//qUncompress好像对前四位的原数据长度没要求，乱填都可以，只不过性能有些差距。
QByteArray zlibToQtUncompr(const char *pZLIBData, uLongf dataLen/*, uLongf srcDataLen = 0x100000*/)
{
    char *pQtData = new char[dataLen + 4];
    char *pByte = (char *)(&dataLen);/*(char *)(&srcDataLen);*/
    pQtData[3] = *pByte;
    pQtData[2] = *(pByte + 1);
    pQtData[1] = *(pByte + 2);
    pQtData[0] = *(pByte + 3);
    memcpy(pQtData + 4, pZLIBData, dataLen);
    QByteArray qByteArray(pQtData, dataLen + 4);
    delete []pQtData;
    return qUncompress(qByteArray);
}

int main(int argc, char *argv[])
{


    QString base64String = "AAAAAAAALkA=";

    QByteArray byteArray = QByteArray::fromBase64(base64String.toUtf8());

    qDebug() << byteArray.toDouble();

    // 将字节数组转换为double类型
    double number;
    QDataStream stream(byteArray);
    stream.setByteOrder(QDataStream::LittleEndian); // 设置字节序为小端
    stream >> number;

    qDebug() << number; // 输出 64.0
}
