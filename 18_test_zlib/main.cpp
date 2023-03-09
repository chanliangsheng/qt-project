#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "zlib.h"
#include <QDebug>
#include <iostream>



int main(int argc, char *argv[])
{
     unsigned char strSrc[] = "hello world,aaaa bbbb cccc";


     unsigned char buf[10]={0};
     unsigned char strDst[1024]={0};
     unsigned long srcLen=sizeof(strSrc);
     unsigned long bufLen=sizeof(buf);
     unsigned long dstLen=sizeof(strDst);



     /*压缩*/ //把strSrc压缩到buf中
     compress(buf,&bufLen,strSrc,srcLen);

     std::cout << buf << std::endl;

     /*解压缩*/ //把buf解压到strDst中
     uncompress(strDst,&dstLen,buf,bufLen);

     std::cout << strDst << std::endl;
     return 0;
}
