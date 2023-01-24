/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *boobleList;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QListWidget *fastList;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *randomList;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *start;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(512, 419);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        boobleList = new QListWidget(groupBox_2);
        boobleList->setObjectName(QStringLiteral("boobleList"));

        verticalLayout_2->addWidget(boobleList);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        fastList = new QListWidget(groupBox_3);
        fastList->setObjectName(QStringLiteral("fastList"));

        verticalLayout_3->addWidget(fastList);


        gridLayout->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        randomList = new QListWidget(groupBox);
        randomList->setObjectName(QStringLiteral("randomList"));

        verticalLayout->addWidget(randomList);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        start = new QPushButton(widget);
        start->setObjectName(QStringLiteral("start"));

        verticalLayout_4->addWidget(start);


        gridLayout->addWidget(widget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 512, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\206\222\346\263\241\346\216\222\345\272\217", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\277\253\351\200\237\346\216\222\345\272\217", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\351\232\217\346\234\272\346\225\260", Q_NULLPTR));
        start->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
