/********************************************************************************
** Form generated from reading UI file 'cash_resiger.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASH_RESIGER_H
#define UI_CASH_RESIGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cash_Resiger
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Cash_Resiger)
    {
        if (Cash_Resiger->objectName().isEmpty())
            Cash_Resiger->setObjectName(QString::fromUtf8("Cash_Resiger"));
        Cash_Resiger->resize(1008, 703);
        centralWidget = new QWidget(Cash_Resiger);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(820, 440, 141, 91));
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 500, 381, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(7);
        formLayout->setVerticalSpacing(7);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        lineEdit_6 = new QLineEdit(formLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_6);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(560, 60, 341, 211));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 431, 461));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(470, 510, 121, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Calibri\";"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 430, 101, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Calibri\";"));
        label_6->setTextFormat(Qt::AutoText);
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(590, 430, 141, 51));
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(590, 500, 141, 51));
        Cash_Resiger->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Cash_Resiger);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1008, 26));
        Cash_Resiger->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Cash_Resiger);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Cash_Resiger->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Cash_Resiger);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Cash_Resiger->setStatusBar(statusBar);

        retranslateUi(Cash_Resiger);

        QMetaObject::connectSlotsByName(Cash_Resiger);
    } // setupUi

    void retranslateUi(QMainWindow *Cash_Resiger)
    {
        Cash_Resiger->setWindowTitle(QApplication::translate("Cash_Resiger", "Cash_Resiger", nullptr));
        pushButton->setText(QApplication::translate("Cash_Resiger", "\347\273\223\347\256\227", nullptr));
        label->setText(QApplication::translate("Cash_Resiger", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Cash_Resiger", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Cash_Resiger", "\345\215\225\344\273\267\357\274\232", nullptr));
        label_7->setText(QApplication::translate("Cash_Resiger", "\346\200\273\344\273\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("Cash_Resiger", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("Cash_Resiger", "\345\272\224\346\211\276\351\233\266\357\274\232", nullptr));
        label_6->setText(QApplication::translate("Cash_Resiger", "\346\224\266\345\217\226\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cash_Resiger: public Ui_Cash_Resiger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASH_RESIGER_H
