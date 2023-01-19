#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QCheckBox>//多选框
#include <QRadioButton>//单选框
#include <QDialog>
#include <QPlainTextEdit>

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initUI();
    void checkFont();
    void checkcolour();
private:
    QCheckBox *checkBox_underline;
    QCheckBox *checkBox_Italic;
    QCheckBox *check_Bold;

    QRadioButton *black_button;
    QRadioButton *blue_button;
    QRadioButton *red_button;

    QPushButton *btn_OK;
    QPushButton *btn_cancel;
    QPushButton *btn_quit;

    QPlainTextEdit *text;

};
#endif // MAINWINDOW_H
