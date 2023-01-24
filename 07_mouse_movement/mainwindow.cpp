#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myqlabel.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "MainWindow的构造函数";



    QPixmap bkgnd("D:/test.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


    //    mydiget2 = new QWidget();
    //    mydiget2->setAttribute(Qt::WA_QuitOnClose, false);
    //    mydiget2->show();


}

MainWindow::~MainWindow()
{

    delete ui;
    qDebug() << "MainWindow的析构函数";
}

