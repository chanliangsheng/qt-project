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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openFile;
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QListView *MS2ListView;
    QPushButton *btnFilter;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QLineEdit *maxRt;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *maxMz;
    QLabel *label_9;
    QLineEdit *minRt;
    QLineEdit *minMz;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(825, 662);
        openFile = new QAction(MainWindow);
        openFile->setObjectName(QStringLiteral("openFile"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 40, 281, 231));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 120, 31, 21));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        MS2ListView = new QListView(widget);
        MS2ListView->setObjectName(QStringLiteral("MS2ListView"));
        MS2ListView->setGeometry(QRect(40, 80, 191, 131));
        btnFilter = new QPushButton(widget);
        btnFilter->setObjectName(QStringLiteral("btnFilter"));
        btnFilter->setGeometry(QRect(190, 20, 75, 23));
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 181, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        maxRt = new QLineEdit(frame);
        maxRt->setObjectName(QStringLiteral("maxRt"));

        gridLayout_4->addWidget(maxRt, 1, 3, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 1, 2, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setFrameShadow(QFrame::Sunken);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        maxMz = new QLineEdit(frame);
        maxMz->setObjectName(QStringLiteral("maxMz"));

        gridLayout_4->addWidget(maxMz, 0, 3, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setFrameShadow(QFrame::Sunken);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        minRt = new QLineEdit(frame);
        minRt->setObjectName(QStringLiteral("minRt"));

        gridLayout_4->addWidget(minRt, 1, 1, 1, 1);

        minMz = new QLineEdit(frame);
        minMz->setObjectName(QStringLiteral("minMz"));

        gridLayout_4->addWidget(minMz, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 825, 22));
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
        openFile->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200*.mgf\346\226\207\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "MS2", Q_NULLPTR));
        btnFilter->setText(QApplication::translate("MainWindow", "Filter", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "mz", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "rt", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
