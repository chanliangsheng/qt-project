#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->connect(ui->radioButtonBlack , &QPushButton::clicked , this , &MainWindow::setcolour);

    this->connect(ui->radioButtonBlue , &QPushButton::clicked , this , &MainWindow::setcolour);

    this->connect(ui->radioButtonRed , &QPushButton::clicked , this , &MainWindow::setcolour);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBoxUnderline_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();//获取字体等等信息

    font.setUnderline(checked);//如果打了勾，则加上下划线

    ui->plainTextEdit->setFont(font);
}//用来检测有没有打勾


void MainWindow::setcolour(){
    QPalette plet = ui->plainTextEdit->palette();//获取颜色信息
    if(ui->radioButtonBlack->isChecked()){
        plet.setColor(QPalette::Text , Qt::black);
    }

    if(ui->radioButtonBlue->isChecked()){
        plet.setColor(QPalette::Text , Qt::blue);
    }

    if(ui->radioButtonRed->isChecked()){
        plet.setColor(QPalette::Text , Qt::red);
    }

    ui->plainTextEdit->setPalette(plet);
};
