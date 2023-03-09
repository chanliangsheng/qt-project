#include "widget.h"
#include "QDebug"
#include <QString>
#include <QByteArray>
#include <QApplication>
#include "base64.h"
#include <iostream>

typedef unsigned char uchar;

float bytesToFloat(std::vector<uchar> &byte_array)
{
    float output;

    *((uchar*)(&output) + 3) = byte_array[3];
    *((uchar*)(&output) + 2) = byte_array[2];
    *((uchar*)(&output) + 1) = byte_array[1];
    *((uchar*)(&output) + 0) = byte_array[0];
    return output;
}

using namespace std;
int main(int argc, char *argv[])
{
    const string test_string = "qgYXQ3";

    std::vector<BYTE> result =  base64_decode(test_string);//result的大小为4

    float test = bytesToFloat(result);

    cout << test << endl;

}
