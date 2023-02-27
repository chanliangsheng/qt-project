#include "mainwindow.h"
#include <QApplication>
#include "tinyxml2.h"
#include <iostream>
#include <QtDebug>
#include <exception>

using namespace std;
using namespace tinyxml2;

int main(int argc, char *argv[])
{
    Q_UNUSED(argc);
    Q_UNUSED(argv);
    const char* ms_level = "1";
    if(*ms_level == '1'){
        qDebug() << "rer";
    }
    else{
        qDebug() << "false";
    }
    return 0;
}
