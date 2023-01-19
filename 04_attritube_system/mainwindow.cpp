#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

//其实就是，用qperson类来接受两个spinbox和两个Qpushbutton的操作；他们的变动会导致qperson对象内部属性的变动，然后把qperson的对象与窗口
//中的texteditor连接起来；其实qperson就是公共接口，接受着所有的操作；

//重点还有可以直接写一个槽函数，而不需要connect，比如on_btnBoyInc_clicked，因为已经知道了这个Qpushbutton叫什么名字了，所以它的槽函数
//的名字肯定是on_btnBoyInc_clicked，所以就不需要在多写connect
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    boy = new qperson;//这里不能qperson *boy = new qperson,这样会导致连接的对象不是类里面定义的boy，而是新的boy
    connect(boy , &qperson::ageChanged , this , &MainWindow::on_ageChanged);

    girl = new qperson;
    girl->sex = "女";
    connect(girl , &qperson::ageChanged , this , &MainWindow::on_ageChanged);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnBoyInc_clicked()
{

    this->boy->incAge();//相当于把男长一岁的按钮和男年龄增加1的行为绑定在一起，而当incage被执行，就会发出ageChanged()信号，这是我定义的

}

void MainWindow::on_btnGirlInc_clicked()
{
    this->girl->incAge();
}

void MainWindow::on_spinBoxBoy_valueChanged(int value)
{
    this->boy->m_age = value;
    emit boy->ageChanged();//发生改变的信号
}

void MainWindow::on_spinBoxGirl_valueChanged(int value)
{
    this->girl->m_age = value;
    emit girl->ageChanged();//发生改变的信号
}

void MainWindow::on_ageChanged()
{
    qperson *checksex = qobject_cast<qperson *>(this->sender());//因为这是一个槽函数，所以可以用来捕获信号的类是什么，并且可以进行强制转换
    if(checksex->sex == "男"){
        this->ui->TextEdit->appendPlainText("男生现在：" + QString::asprintf(",年龄=%d",this->boy->m_age));
    }
    else{
        this->ui->TextEdit->appendPlainText("女生现在：" + QString::asprintf(",年龄=%d",this->girl->m_age));
    }

}







