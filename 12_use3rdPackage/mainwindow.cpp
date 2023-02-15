#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <boost/lexical_cast.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    using namespace boost;

    double a = boost::lexical_cast<double>("12");

    qDebug() << a;
}

MainWindow::~MainWindow()
{
    delete ui;
}

