#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qperson.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    qperson *boy;
    qperson *girl;

public slots:
    void on_btnBoyInc_clicked();//相当于把男长一岁的按钮和男年龄增加1的行为绑定在一起，而当incage被执行，就会发出ageChanged()信号，这是我定义的
    void on_btnGirlInc_clicked();//是一个按钮被按下之后的槽函数
    void on_spinBoxBoy_valueChanged(int value);//是一个spinbox被改变之后的槽函数
    void on_spinBoxGirl_valueChanged(int value);//是一个spinbox被改变之后的槽函数

    //自定义槽函数
    void on_ageChanged();//可以捕获发送信息的对方是什么类
};
#endif // MAINWINDOW_H
