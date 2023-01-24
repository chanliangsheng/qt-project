#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidget>
#include <QLabel>
#include "myqtringlist.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    for (int i = 0; i < 10000; ++i) {
        ui->listWidget->addItems(myQtringList() << "test" << "fuck");
    }

    connect(ui->listWidget , &QListWidget::itemClicked,[=](QListWidgetItem* item){
        if (ui->listWidget->item(0) == item) {
                qDebug() << "dfa";
            }
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

