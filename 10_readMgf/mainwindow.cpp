#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QDebug>
#include <QFileDialog>
#include <QThread>
#include <MS2.h>
#include <QStringList>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MS2mode=new QStringListModel(this); //创建数据模型
    ui->listView->setModel(MS2mode); //为listView设置数据模型
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    QThread *t1 = new QThread(this);//创建线程t1
    MS2 *myMS2 = new MS2;
    myMS2->moveToThread(t1);//创建MS2对象，移到线程t1中
    t1->start();//开始t1线程运行


    qDebug() << "现在的主线程是:" << QThread::currentThread();

    connect(ui->openFile , &QAction::triggered , [=](){
        QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"),"D:/R package/data/mzml(idx)");
        emit MainWindow::sendFilename(fileName);
    });//点击菜单的打开文件来打开文件

    connect(this,&MainWindow::sendFilename,myMS2,[=](QString fileName){
        myMS2->readMgf(fileName);
    });//用另一个线程来进行readMgf操作

    connect(myMS2 , &MS2::sendMS2 , this,[=](QList<singleMS2> *MS2List){
       this->MS2List = MS2List;//存储
        QStringList store;
        for (int i=0;i<MS2List->size();i++) {
           store.push_back(MS2List->at(i));
        }
        MS2mode->setStringList(store);
    });

    connect(ui->listView , &QListView::doubleClicked , [=](const QModelIndex &index){
         qDebug() << MS2List->takeAt(index.row()).m_rt;
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

