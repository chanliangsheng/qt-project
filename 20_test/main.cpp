#include "mainwindow.h"
#include <QApplication>
#include <base64.h>
#include <string>
#include <QDebug>
#include <zlib.h>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
typedef unsigned char BYTE;
std::vector<double>* bytesToDouble(std::vector<uchar> &byte_array)
{
    std::vector<double>* vector_double = new std::vector<double>;//初始化为空数组
    double output;
    for(unsigned int i = 0 ; i < (byte_array.size() / 8); i = i + 8){
        *((uchar*)(&output) + 7) = byte_array[i + 7];
        *((uchar*)(&output) + 6) = byte_array[i + 6];
        *((uchar*)(&output) + 5) = byte_array[i + 5];
        *((uchar*)(&output) + 4) = byte_array[i + 4];
        *((uchar*)(&output) + 3) = byte_array[i + 3];
        *((uchar*)(&output) + 2) = byte_array[i + 2];
        *((uchar*)(&output) + 1) = byte_array[i + 1];
        *((uchar*)(&output) + 0) = byte_array[i + 0];
        vector_double->emplace_back(output);
    }
    return vector_double;//返回数组的指针
}


std::vector<BYTE> decompress_string(const std::vector<BYTE>& str)
{
    z_stream zs;                        // z_stream is zlib's control structure
    memset(&zs, 0, sizeof(zs));

    if (inflateInit(&zs) != Z_OK)
        throw(std::runtime_error("inflateInit failed while decompressing."));

    zs.next_in = (Bytef*)str.data();
    zs.avail_in = str.size();

    int ret;
    BYTE outbuffer[32768];
    std::vector<BYTE> output;//真正的输出

    // get the decompressed bytes blockwise using repeated calls to inflate
    do {
        zs.next_out = reinterpret_cast<Bytef*>(outbuffer);
        zs.avail_out = sizeof(outbuffer);

        ret = inflate(&zs, 0);

        if (output.size() < zs.total_out) {
            for(uInt i = 0 ; i < zs.avail_out ; i ++ ){
                output.emplace_back(outbuffer[i]);
            }
        }

    } while (ret == Z_OK);

    inflateEnd(&zs);

    if (ret != Z_STREAM_END) {          // an error occurred that was not EOF
        std::ostringstream oss;
        oss << "Exception during zlib decompression: (" << ret << ") "
            << zs.msg;
        throw(std::runtime_error(oss.str()));
    }

    return output;
}


int main(int argc, char *argv[])
{
    //这四个字符解码后的字节数组，刚好是4个字节，所以用它来举例
        const string test_string = "eJwlzjtIW3EUx/G/qNRFqrhIivaiIupSSsEiCPnjUINIa/EJOoQQfASf0fjoI171qqm2JqJBMQoRHAqFtuhgaUXu4CKUIsTBB+h1UVGcdLCLyv3e6cM5//M/vyOEkOEGtxRCKAP1jab6/4Zmq37SgstbHvpdja3UZ/VteGtvN1U9tg5T2X2Gzhyj0zS6/b2L99pMr6lRqqHyOrWb/qgbxd6x5Z2rB2PZPuYq11DdeNxL3x9DqcT1kbMeRP3RKSr2kn7mv92jfvVvgNzIs3fcsxNGI+MaZWbVe/Z03KF4U/OBPclBjK7uouGr+MjeX0uoHN2gXvTTTz8+ZZA9uSHUbekqc1oZOjf9qBdsoFw4sEy3D/F+MYfG2D2q+y+HyX86ifqlbYS5k1LLiIaKK2rVhYeolrdq/PNqKLIMVPPzRum3FKNw/UE9zbD6CY4x7nm1aPk8aZx/h00oHecYfdEfILe34hP3FgXQ6XJMsHclcZLa+xWN6rrP5Pw+Rvk29AV75JR1R0EQw54Qedl/p6mrxQx5gZxZvPgxz96DWEQ+AGCftMA=";

        //结果就是字节数组了
        std::vector<BYTE> decoded_result =  base64_decode(test_string);//result的大小为4

        std::vector<BYTE> decompress_result = decompress_string(decoded_result);//解压

        double output;

        *((uchar*)(&output) + 7) = decompress_result[7];
        *((uchar*)(&output) + 6) = decompress_result[6];
        *((uchar*)(&output) + 5) = decompress_result[5];
        *((uchar*)(&output) + 4) = decompress_result[4];
        *((uchar*)(&output) + 3) = decompress_result[3];
        *((uchar*)(&output) + 2) = decompress_result[2];
        *((uchar*)(&output) + 1) = decompress_result[1];
        *((uchar*)(&output) + 0) = decompress_result[0];

        qDebug() << output;

}




