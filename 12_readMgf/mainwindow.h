#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QStringListModel>
#include <QThread>
#include "MS2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public:
    QList<singleMS2> *MS2List;
    QStringListModel *MS2Listmode;
    QThread *workingThread;
private:
    Ui::MainWindow *ui;

signals:
    void sendFilename(QString fileName);

public slots:
    void on_openFile_triggered();
};
#endif // MAINWINDOW_H
