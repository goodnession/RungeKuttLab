/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *xMin;
    QLineEdit *xMax;
    QLineEdit *h;
    QLineEdit *x;
    QLineEdit *y;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCustomPlot *graphic;
    QTableView *tableView;
    QCustomPlot *graphicAcc;
    QLabel *label_8;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(866, 685);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 241, 211));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_7);

        xMin = new QLineEdit(groupBox);
        xMin->setObjectName(QString::fromUtf8("xMin"));

        formLayout->setWidget(1, QFormLayout::FieldRole, xMin);

        xMax = new QLineEdit(groupBox);
        xMax->setObjectName(QString::fromUtf8("xMax"));

        formLayout->setWidget(2, QFormLayout::FieldRole, xMax);

        h = new QLineEdit(groupBox);
        h->setObjectName(QString::fromUtf8("h"));

        formLayout->setWidget(3, QFormLayout::FieldRole, h);

        x = new QLineEdit(groupBox);
        x->setObjectName(QString::fromUtf8("x"));

        formLayout->setWidget(4, QFormLayout::FieldRole, x);

        y = new QLineEdit(groupBox);
        y->setObjectName(QString::fromUtf8("y"));

        formLayout->setWidget(5, QFormLayout::FieldRole, y);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(6, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_2);

        graphic = new QCustomPlot(centralwidget);
        graphic->setObjectName(QString::fromUtf8("graphic"));
        graphic->setGeometry(QRect(280, 20, 281, 211));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 250, 531, 381));
        graphicAcc = new QCustomPlot(centralwidget);
        graphicAcc->setObjectName(QString::fromUtf8("graphicAcc"));
        graphicAcc->setGeometry(QRect(570, 20, 281, 211));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 0, 131, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(570, 0, 121, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 866, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \321\203\321\201\320\273\320\276\320\262\320\270\320\271", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\320\260\321\217", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\250\320\260\320\263", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "x", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "y", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "y' = (y^2 + x*y)/x^2", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\261\320\273\320\270\320\266\320\265\320\275\320\275\320\276\320\265 \321\200\320\265\321\210\320\265\320\275\320\270\320\265", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\320\276\320\265 \321\200\320\265\321\210\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
