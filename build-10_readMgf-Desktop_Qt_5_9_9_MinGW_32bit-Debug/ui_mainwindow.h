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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openFile;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QListWidget *listWidget_MS1;
    QLabel *label_2;
    QListWidget *listWidget_MS2;
    QListView *listView;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(790, 646);
        openFile = new QAction(MainWindow);
        openFile->setObjectName(QStringLiteral("openFile"));
        openFile->setCheckable(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 111, 271));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        listWidget_MS1 = new QListWidget(groupBox);
        listWidget_MS1->setObjectName(QStringLiteral("listWidget_MS1"));

        gridLayout->addWidget(listWidget_MS1, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        listWidget_MS2 = new QListWidget(groupBox);
        listWidget_MS2->setObjectName(QStringLiteral("listWidget_MS2"));

        gridLayout->addWidget(listWidget_MS2, 1, 1, 1, 1);

        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(240, 70, 71, 201));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 790, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(openFile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        openFile->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200*.mgf\346\226\207\344\273\266", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "MS1 + MS2", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "MS1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "MS2", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
