#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mzml.h"

#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mzml test_mzml;

    QTime timedebuge;//声明一个时钟对象
    timedebuge.start();//开始计时

    test_mzml.read_mzml("D:/mzml/MSnbase_test.mzml");


    qDebug() <<  test_mzml.m_ms1_vector.size();

    qDebug()<<"第一段程序耗时："<<timedebuge.elapsed()/1000.0<<"s";//输出计时

    qDebug() << test_mzml.m_ms1_vector.size();
}

MainWindow::~MainWindow()
{
    delete ui;
}

