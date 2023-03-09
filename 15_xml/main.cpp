#include "mainwindow.h"
#include <QApplication>
#include "tinyxml2.h"
#include <iostream>
#include <QtDebug>
#include <exception>
#include "base64.h"
#include <zlib.h>
#include <vector>
#include <string>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;
using namespace tinyxml2;

std::vector<float> bytesToFloat(std::vector<uchar> &byte_array)
{
    std::vector<float> vector_float;

    float output;

    for(unsigned int i = 0 ; i < (byte_array.size() / 4); i = i + 4){
        *((uchar*)(&output) + 3) = byte_array[i + 3];
        *((uchar*)(&output) + 2) = byte_array[i + 2];
        *((uchar*)(&output) + 1) = byte_array[i + 1];
        *((uchar*)(&output) + 0) = byte_array[i + 0];
        vector_float.emplace_back(output);
    }

    return vector_float;
}

std::vector<double> bytesTodouble(std::vector<uchar> &byte_array)
{
    std::vector<double> vector_double;
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
        vector_double.emplace_back(output);
    }
    return vector_double;
}

/** Compress a STL string using zlib with given compression level and return
  * the binary data. */
std::string compress_string(const std::string& str,
                            int compressionlevel = Z_BEST_COMPRESSION)
{
    z_stream zs;                        // z_stream is zlib's control structure
    memset(&zs, 0, sizeof(zs));

    if (deflateInit(&zs, compressionlevel) != Z_OK)
        throw(std::runtime_error("deflateInit failed while compressing."));

    zs.next_in = (Bytef*)str.data();
    zs.avail_in = str.size();           // set the z_stream's input

    int ret;
    char outbuffer[32768];
    std::string outstring;

    // retrieve the compressed bytes blockwise
    do {
        zs.next_out = reinterpret_cast<Bytef*>(outbuffer);
        zs.avail_out = sizeof(outbuffer);

        ret = deflate(&zs, Z_FINISH);

        if (outstring.size() < zs.total_out) {
            // append the block to the output string
            outstring.append(outbuffer,
                             zs.total_out - outstring.size());
        }
    } while (ret == Z_OK);

    deflateEnd(&zs);

    if (ret != Z_STREAM_END) {          // an error occurred that was not EOF
        std::ostringstream oss;
        oss << "Exception during zlib compression: (" << ret << ") " << zs.msg;
        throw(std::runtime_error(oss.str()));
    }

    return outstring;
}

/** Decompress an STL string using zlib and return the original data. */
std::string decompress_string(const std::string& str)
{
    z_stream zs;                        // z_stream is zlib's control structure
    memset(&zs, 0, sizeof(zs));

    if (inflateInit(&zs) != Z_OK)
        throw(std::runtime_error("inflateInit failed while decompressing."));

    zs.next_in = (Bytef*)str.data();
    zs.avail_in = str.size();

    int ret;
    char outbuffer[32768];
    std::string outstring;

    // get the decompressed bytes blockwise using repeated calls to inflate
    do {
        zs.next_out = reinterpret_cast<Bytef*>(outbuffer);
        zs.avail_out = sizeof(outbuffer);

        ret = inflate(&zs, 0);

        if (outstring.size() < zs.total_out) {
            outstring.append(outbuffer,
                             zs.total_out - outstring.size());
        }

    } while (ret == Z_OK);

    inflateEnd(&zs);

    if (ret != Z_STREAM_END) {          // an error occurred that was not EOF
        std::ostringstream oss;
        oss << "Exception during zlib decompression: (" << ret << ") "
            << zs.msg;
        throw(std::runtime_error(oss.str()));
    }

    return outstring;
}


int main(int argc, char *argv[])
{
    Q_UNUSED(argc);
    Q_UNUSED(argv);
    using namespace tinyxml2;
    XMLDocument xml;
    //载入数据,需要类型是char*
    xml.LoadFile("D:/mzml/NEG_ID_02.mzML");

    XMLElement *root_node = xml.RootElement();
    //检查是否为一个正确的mzml文件


    const char* test_text = root_node->FirstChildElement("mzML")->FirstChildElement("run")->FirstChildElement("spectrumList")->FirstChildElement("spectrum")->FirstChildElement("binaryDataArrayList")->FirstChildElement("binaryDataArray")->FirstChildElement("binary")->GetText();


    std::vector<BYTE> decode_result =  base64_decode(test_text);//解码

    decode_result = decompress_string(decode_result);//解压

    auto vector_double  = bytesTodouble(decode_result);

    float test = vector_double[0];

    qDebug()<<test;

    return 0;
}
