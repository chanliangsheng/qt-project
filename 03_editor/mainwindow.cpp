#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    fLabCurFile = new QLabel("当前文件：");
    progressbar = new QProgressBar;
    progressbar->setMinimum(5);
    progressbar->setValue(8);
    this->ui->statusbar->addWidget(fLabCurFile);//增加文字
    this->ui->statusbar->addWidget(progressbar);//在状态栏中增加进度条
    spinFontSize;
    comboFont;

}

