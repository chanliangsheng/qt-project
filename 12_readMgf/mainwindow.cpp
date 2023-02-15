#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include "MS2.h"
#include <Qdebug>
#include <QListWidget>
#include <QTableWidget>
#include <QTreeWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MS2Listmode=new QStringListModel(this); //创建数据模型
    ui->MS2ListView->setModel(MS2Listmode); //为listView设置数据模型
    ui->MS2ListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //设置QStringListModel

    workingThread = new QThread(this);//创建线程t1
    MS2 *myMS2 = new MS2;
    myMS2->moveToThread(workingThread);//创建MS2对象，移到线程t1中
    workingThread->start();//开始t1线程运行
    //设置工作线程

    qDebug() << "现在的主线程是:" << QThread::currentThread();

    connect(this,&MainWindow::sendFilename,myMS2,[=](QString fileName){
        myMS2->readMgf(fileName);
    });//用另一个线程来进行readMgf操作

    connect(myMS2 , &MS2::sendMS2 , this,[=](QList<singleMS2> *MS2List){

        this->MS2List = MS2List;//存储
        QStringList store;
        for (int i=0;i<MS2List->size();i++) {
            store << QString("rt:   ") + QString::number(MS2List->at(i).m_rt) +
                     QString("  mz:   ") + QString::number(MS2List->at(i).m_Precursor_ion.first);
        }
        this->MS2Listmode->setStringList(store);
    });//展示结果

    connect(ui->MS2ListView , &QListView::doubleClicked , [=](const QModelIndex &index){
        QTreeWidget *q1 = new QTreeWidget;
        q1->setAttribute(Qt::WA_QuitOnClose , false);

        q1->setAttribute(Qt::WA_DeleteOnClose);


        q1->setHeaderLabels(QStringList()<<"attribute"<<"mz/rt"<<"intensity");


        QTreeWidgetItem *rtItem = new QTreeWidgetItem(QStringList() << "rt");
        QTreeWidgetItem *Precursor_ion = new QTreeWidgetItem(QStringList() << "Precursor ion");
        QTreeWidgetItem *Fragment_ion = new QTreeWidgetItem(QStringList() << "Fragment ion");
        //三个父节点

        q1->addTopLevelItem(rtItem);
        q1->addTopLevelItem(Precursor_ion);
        q1->addTopLevelItem(Fragment_ion);
        //加载到图中

        QString rt = QString::number(this->MS2List->at(index.row()).m_rt);
        QTreeWidgetItem *rtChildItem = new QTreeWidgetItem(QStringList() << "" << rt << "");
        rtItem->addChild(rtChildItem);
        //加载rt的子节点


        QString Precursor_ion_mz = QString::number(this->MS2List->at(index.row()).m_Precursor_ion.first);
        QString Precursor_ion_intensity = QString::number(this->MS2List->at(index.row()).m_Precursor_ion.second);
        QTreeWidgetItem *Precursor_ion_ChildItem = new QTreeWidgetItem(QStringList() << "" << Precursor_ion_mz << Precursor_ion_intensity);
        Precursor_ion->addChild(Precursor_ion_ChildItem);
        //加载前体离子的子节点


        int Fragment_ion_num = this->MS2List->at(index.row()).m_Fragment_ion.size();//获取碎片的数量
        for (int i=0;i<Fragment_ion_num;i++) {
            QString Fragment_ion_mz = QString::number(this->MS2List->at(index.row()).m_Fragment_ion.at(i).first);
            QString Fragment_ion_intensity = QString::number(this->MS2List->at(index.row()).m_Fragment_ion.at(i).second);
            QTreeWidgetItem *Fragment_ion_ChildItem = new QTreeWidgetItem(QStringList() << "" << Fragment_ion_mz << Fragment_ion_intensity);
            Fragment_ion->addChild(Fragment_ion_ChildItem);
        }

        q1->expandAll();
        q1->show();
    });//双击展示
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openFile_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"),"D:/R package/data/mzml(idx)");
    emit MainWindow::sendFilename(fileName);
    //打开文件
}

