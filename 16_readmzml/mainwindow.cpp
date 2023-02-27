#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    connect(ui->open_mzml_file , &QAction::triggered , [=](){
        QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"),"D:/R package/data/mzml(idx)");
        emit MainWindow::sendFilename(fileName);
    });//点击菜单的打开文件来打开文件


}

MainWindow::~MainWindow()
{
    delete ui;
}

