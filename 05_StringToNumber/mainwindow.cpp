#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->lineEdit_amount , &QLineEdit::textChanged , this ,[=](){
        int amount =  ui->lineEdit_amount->text().toInt();
        int unit_pirce = ui->lineEdit_unit_price->text().toInt();
        ui->lineEdit_total_price->setText(QString::number(amount * unit_pirce));
    });

    connect(ui->lineEdit_unit_price , &QLineEdit::textChanged , this ,[=](){
        int amount =  ui->lineEdit_amount->text().toInt();
        int unit_pirce = ui->lineEdit_unit_price->text().toInt();
        ui->lineEdit_total_price->setText(QString::number(amount * unit_pirce));
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

