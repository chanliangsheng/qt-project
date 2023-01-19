#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidget>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->listWidget->addItems(QStringList() << "test" << "fuck");


}

MainWindow::~MainWindow()
{
    delete ui;
}

