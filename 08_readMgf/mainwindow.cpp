#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QThread>
#include <ms2.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << this;
    qDebug() << "现在的主线程是：" << QThread::currentThreadId();
    QThread *t1 = new QThread(this);//新建一个线程
    ms2 *m1 = new ms2();//新建一个ms2对象


    m1->moveToThread(t1);//m1移动到线程t1中


    t1->start();//设置t1为运行状态


    connect(ui->start , &QPushButton::clicked , this , [=](){
        QString file_name = QFileDialog::getOpenFileName(this);//获取文件路径
        emit this->send_fileName(file_name);
    });
    //当按了开始按钮，就把文件名发送给另外一个线程，不能在这个匿名函数里面写m1->readMgf(fileName);，因为this已经限定了是在这个线程里面了

    connect(this,&MainWindow::send_fileName,m1,[=](QString fileName){
        m1->readMgf(fileName);
    });
    //现在m1的信号槽函数都已经可以在另外一个线程中工作了

    connect(m1 , &ms2::sendArray , this , [=](QList<int> List){
        for (int i = 0;i<List.size();i++) {
            this->ui->listWidget->addItem(QString::number(List[i]));
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_start_clicked()
{

}
