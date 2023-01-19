#include "mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent)
{
    this->initUI();

    connect(checkBox_underline , &QCheckBox::clicked , this , &MainWindow::checkFont);
    connect(check_Bold , &QCheckBox::clicked , this , &MainWindow::checkFont);
    connect(checkBox_Italic , &QCheckBox::clicked , this , &MainWindow::checkFont);

    connect(red_button , &QPushButton::clicked , this , &MainWindow::checkcolour);
    connect(black_button , &QPushButton::clicked , this , &MainWindow::checkcolour);
    connect(blue_button , &QPushButton::clicked , this , &MainWindow::checkcolour);


}

MainWindow::~MainWindow()
{
}

void MainWindow::initUI()
{
    checkBox_underline = new QCheckBox(tr("underline"));
    checkBox_Italic = new QCheckBox(tr("Italic"));
    check_Bold = new QCheckBox(tr("Bold"));

    QHBoxLayout *Hlayout1 = new QHBoxLayout;
    Hlayout1->addWidget(checkBox_underline);
    Hlayout1->addWidget(checkBox_Italic);
    Hlayout1->addWidget(check_Bold);
    //创建一个水平布局，把一些控件放入


    black_button = new QRadioButton("black");
    blue_button = new QRadioButton("blue");
    red_button = new QRadioButton("red");
    QHBoxLayout *Hlayout2 = new QHBoxLayout;
    Hlayout2->addWidget(black_button);
    Hlayout2->addWidget(blue_button);
    Hlayout2->addWidget(red_button);
    //创建一个水平布局，把一些控件放入


    btn_OK = new QPushButton("OK");
    btn_cancel = new QPushButton("cancel");
    btn_quit = new QPushButton("quit");
    QHBoxLayout *Hlayout3 = new QHBoxLayout;
    Hlayout3->addWidget(btn_OK);
    Hlayout3->addWidget(btn_cancel);
    Hlayout3->addWidget(btn_quit);
    //创建一个水平布局，把一些控件放入


    text = new QPlainTextEdit("hello world");

    //    this->resize(600,600);

    QVBoxLayout *Vlayout = new QVBoxLayout;
    Vlayout->addLayout(Hlayout1);
    Vlayout->addWidget(text);
    Vlayout->addLayout(Hlayout2);
    Vlayout->addLayout(Hlayout3);

    this->setLayout(Vlayout);
}

void MainWindow::checkFont()
{
    QFont font = this->text->font();//取出字体详细的信息

    bool underline_bool = this->checkBox_underline->isChecked();
    bool Bold_bool = this->check_Bold->isChecked();
    bool Italic_bool = this->checkBox_Italic->isChecked();

    font.setUnderline(underline_bool);
    font.setBold(Bold_bool);
    font.setItalic(Italic_bool);
    //设置字体

    this->text->setFont(font);
}

void MainWindow::checkcolour()
{
    QPalette colour = this->text->palette();

    bool red_check = this->red_button->isChecked();
    bool black_check = this->black_button->isChecked();
    bool blue_check = this->blue_button->isChecked();

    if(black_check){
        colour.setColor(QPalette::Text , Qt::black);
    }
    if(red_check){
        colour.setColor(QPalette::Text , Qt::red);
    }
    if(blue_check){
        colour.setColor(QPalette::Text , Qt::blue);
    }
    this->text->setPalette(colour);
}

