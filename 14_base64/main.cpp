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

    using namespace std;
    QString base64String = "AAAAAAAAAAAAAAAAAAAAQAAAAAAAABBAAAAAAAAAGEAAAAAAAAAgQAAAAAAAACRAAAAAAAAAKEAAAAAAAAAsQAAAAAAAADBAAAAAAAAAMkA=";

    QByteArray byteArray = QByteArray::fromBase64(base64String.toUtf8());

    QList<QByteArray> byteArrayList;
    for (int i = 0; i < 10; i++) {
        QByteArray byteArraySegment = byteArray.mid(i * 8, 8);
        byteArrayList.append(byteArraySegment);
    }
    qDebug() << byteArray;
    // 将字节数组转换为float类型
    float number;
    QDataStream stream(byteArray.right(8));

    stream.setByteOrder(QDataStream::LittleEndian); // 设置字节序为小端
    stream >> number;

    qDebug() << number; // 输出 64.0
    return 0;
}
