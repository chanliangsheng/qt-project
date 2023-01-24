#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <myqthread.h>
#include <QVector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QThread *t1 = new QThread(this);//创建一个子线程

    random * r1 = new random();//生成工作类

    r1->moveToThread(t1);//移动到线程t1中

    t1->start();//启动线程，但是线程还没开始工作
    connect(ui->start , &QPushButton::clicked   , [=](){
        r1->working(100000);
    });

    connect(r1 , &random::sendList , ui->randomList , [=](QList<int> list){
        for (int i =0;i<list.size();i++) {
            ui->randomList->addItem(QString::number(list[i]));
        }
        t1->exit();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

