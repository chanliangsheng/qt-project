#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myqlabel.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myQlabel *mylabel = new myQlabel(this);

    mylabel->setText("shit");

}

MainWindow::~MainWindow()
{
    delete ui;
}

