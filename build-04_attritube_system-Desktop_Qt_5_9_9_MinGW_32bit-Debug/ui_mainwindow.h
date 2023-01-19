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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxBoy;
    QPushButton *btnBoyInc;
    QPushButton *classInfo;
    QLabel *label_2;
    QSpinBox *spinBoxGirl;
    QPushButton *btnGirlInc;
    QPushButton *btnclear;
    QPlainTextEdit *TextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxBoy = new QSpinBox(centralwidget);
        spinBoxBoy->setObjectName(QStringLiteral("spinBoxBoy"));

        gridLayout->addWidget(spinBoxBoy, 0, 1, 1, 1);

        btnBoyInc = new QPushButton(centralwidget);
        btnBoyInc->setObjectName(QStringLiteral("btnBoyInc"));

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        classInfo = new QPushButton(centralwidget);
        classInfo->setObjectName(QStringLiteral("classInfo"));

        gridLayout->addWidget(classInfo, 0, 3, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxGirl = new QSpinBox(centralwidget);
        spinBoxGirl->setObjectName(QStringLiteral("spinBoxGirl"));

        gridLayout->addWidget(spinBoxGirl, 1, 1, 1, 1);

        btnGirlInc = new QPushButton(centralwidget);
        btnGirlInc->setObjectName(QStringLiteral("btnGirlInc"));

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        btnclear = new QPushButton(centralwidget);
        btnclear->setObjectName(QStringLiteral("btnclear"));

        gridLayout->addWidget(btnclear, 1, 3, 1, 1);

        TextEdit = new QPlainTextEdit(centralwidget);
        TextEdit->setObjectName(QStringLiteral("TextEdit"));

        gridLayout->addWidget(TextEdit, 2, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btnclear, SIGNAL(clicked(bool)), TextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\347\224\267\345\255\251\345\271\264\351\276\204", Q_NULLPTR));
        btnBoyInc->setText(QApplication::translate("MainWindow", "\347\224\267\351\225\277\344\270\200\345\262\201", Q_NULLPTR));
        classInfo->setText(QApplication::translate("MainWindow", "\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\245\263\345\255\251\345\271\264\351\276\204", Q_NULLPTR));
        btnGirlInc->setText(QApplication::translate("MainWindow", "\345\245\263\351\225\277\344\270\200\345\262\201", Q_NULLPTR));
        btnclear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
