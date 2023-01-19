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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_amount;
    QLabel *label_2;
    QLineEdit *lineEdit_unit_price;
    QLabel *label_6;
    QLineEdit *lineEdit_total_price;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *decimal_sixteen;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *decimal_two;
    QLineEdit *decimal_ten;
    QPushButton *btn_ten;
    QPushButton *btn_sixteen;
    QPushButton *btn_two;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(377, 326);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_amount = new QLineEdit(centralwidget);
        lineEdit_amount->setObjectName(QStringLiteral("lineEdit_amount"));

        gridLayout->addWidget(lineEdit_amount, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEdit_unit_price = new QLineEdit(centralwidget);
        lineEdit_unit_price->setObjectName(QStringLiteral("lineEdit_unit_price"));

        gridLayout->addWidget(lineEdit_unit_price, 0, 3, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        lineEdit_total_price = new QLineEdit(centralwidget);
        lineEdit_total_price->setObjectName(QStringLiteral("lineEdit_total_price"));

        gridLayout->addWidget(lineEdit_total_price, 1, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        decimal_sixteen = new QLineEdit(centralwidget);
        decimal_sixteen->setObjectName(QStringLiteral("decimal_sixteen"));

        gridLayout_2->addWidget(decimal_sixteen, 1, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        decimal_two = new QLineEdit(centralwidget);
        decimal_two->setObjectName(QStringLiteral("decimal_two"));

        gridLayout_2->addWidget(decimal_two, 2, 1, 1, 1);

        decimal_ten = new QLineEdit(centralwidget);
        decimal_ten->setObjectName(QStringLiteral("decimal_ten"));

        gridLayout_2->addWidget(decimal_ten, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 3, 1);

        btn_ten = new QPushButton(centralwidget);
        btn_ten->setObjectName(QStringLiteral("btn_ten"));

        gridLayout_3->addWidget(btn_ten, 0, 1, 1, 1);

        btn_sixteen = new QPushButton(centralwidget);
        btn_sixteen->setObjectName(QStringLiteral("btn_sixteen"));

        gridLayout_3->addWidget(btn_sixteen, 1, 1, 1, 1);

        btn_two = new QPushButton(centralwidget);
        btn_two->setObjectName(QStringLiteral("btn_two"));

        gridLayout_3->addWidget(btn_two, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 377, 22));
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
        label->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        lineEdit_amount->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\215\225\344\273\267\357\274\232", Q_NULLPTR));
        lineEdit_unit_price->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\200\273\344\273\267\357\274\232", Q_NULLPTR));
        lineEdit_total_price->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        btn_ten->setText(QApplication::translate("MainWindow", "\350\275\254\346\215\242", Q_NULLPTR));
        btn_sixteen->setText(QApplication::translate("MainWindow", "\350\275\254\346\215\242", Q_NULLPTR));
        btn_two->setText(QApplication::translate("MainWindow", "\350\275\254\346\215\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
