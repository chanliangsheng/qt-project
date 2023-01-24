#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QDebug>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->openFile , &QAction::triggered , [=](){
        QString fileName = QFileDialog::getOpenFileName();
        emit MainWindow::sendFilename(fileName);
    });//点击菜单的打开文件来打开文件


}

MainWindow::~MainWindow()
{
    delete ui;
}

