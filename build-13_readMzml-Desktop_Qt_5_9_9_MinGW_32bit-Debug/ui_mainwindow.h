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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openFile;
    QWidget *centralwidget;
    QListWidget *MS1ListWidget;
    QListWidget *MS2ListWidget;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        openFile = new QAction(MainWindow);
        openFile->setObjectName(QStringLiteral("openFile"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MS1ListWidget = new QListWidget(centralwidget);
        MS1ListWidget->setObjectName(QStringLiteral("MS1ListWidget"));
        MS1ListWidget->setGeometry(QRect(110, 40, 71, 101));
        MS2ListWidget = new QListWidget(centralwidget);
        MS2ListWidget->setObjectName(QStringLiteral("MS2ListWidget"));
        MS2ListWidget->setGeometry(QRect(110, 160, 71, 101));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 90, 21, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 210, 21, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(openFile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        openFile->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200*.mzml\346\226\207\344\273\266", Q_NULLPTR));
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
