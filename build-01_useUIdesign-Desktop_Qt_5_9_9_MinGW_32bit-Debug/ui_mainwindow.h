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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxUnderline;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonBlack;
    QRadioButton *radioButtonRed;
    QRadioButton *radioButtonBlue;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonConfurm;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonQuit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(750, 578);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(1000000, 1000000));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBoxUnderline = new QCheckBox(groupBox);
        checkBoxUnderline->setObjectName(QStringLiteral("checkBoxUnderline"));

        horizontalLayout->addWidget(checkBoxUnderline);

        checkBoxItalic = new QCheckBox(groupBox);
        checkBoxItalic->setObjectName(QStringLiteral("checkBoxItalic"));

        horizontalLayout->addWidget(checkBoxItalic);

        checkBoxBold = new QCheckBox(groupBox);
        checkBoxBold->setObjectName(QStringLiteral("checkBoxBold"));

        horizontalLayout->addWidget(checkBoxBold);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButtonBlack = new QRadioButton(groupBox_2);
        radioButtonBlack->setObjectName(QStringLiteral("radioButtonBlack"));

        horizontalLayout_2->addWidget(radioButtonBlack);

        radioButtonRed = new QRadioButton(groupBox_2);
        radioButtonRed->setObjectName(QStringLiteral("radioButtonRed"));

        horizontalLayout_2->addWidget(radioButtonRed);

        radioButtonBlue = new QRadioButton(groupBox_2);
        radioButtonBlue->setObjectName(QStringLiteral("radioButtonBlue"));

        horizontalLayout_2->addWidget(radioButtonBlue);


        verticalLayout->addWidget(groupBox_2);


        verticalLayout_2->addWidget(groupBox_3);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QFont font;
        font.setPointSize(17);
        plainTextEdit->setFont(font);

        verticalLayout_2->addWidget(plainTextEdit);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(1000, 50));
        groupBox_4->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonConfurm = new QPushButton(groupBox_4);
        pushButtonConfurm->setObjectName(QStringLiteral("pushButtonConfurm"));
        pushButtonConfurm->setCheckable(false);

        horizontalLayout_3->addWidget(pushButtonConfurm);

        pushButtonCancel = new QPushButton(groupBox_4);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        horizontalLayout_3->addWidget(pushButtonCancel);

        horizontalSpacer = new QSpacerItem(100, 100, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonQuit = new QPushButton(groupBox_4);
        pushButtonQuit->setObjectName(QStringLiteral("pushButtonQuit"));

        horizontalLayout_3->addWidget(pushButtonQuit);


        verticalLayout_2->addWidget(groupBox_4);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonQuit, SIGNAL(clicked(bool)), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "dialog by design", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        groupBox->setTitle(QString());
        checkBoxUnderline->setText(QApplication::translate("MainWindow", "Underline", Q_NULLPTR));
        checkBoxItalic->setText(QApplication::translate("MainWindow", "Italic", Q_NULLPTR));
        checkBoxBold->setText(QApplication::translate("MainWindow", "Bold", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        radioButtonBlack->setText(QApplication::translate("MainWindow", "Black", Q_NULLPTR));
        radioButtonRed->setText(QApplication::translate("MainWindow", "Red", Q_NULLPTR));
        radioButtonBlue->setText(QApplication::translate("MainWindow", "Blue", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "hello world!!!", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        pushButtonConfurm->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButtonQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
