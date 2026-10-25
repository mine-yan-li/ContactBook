/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *contactBook;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *field_label_1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *field_label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *field_label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *field_label_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *insertButton;
    QPushButton *exportButton;
    QPushButton *importButton;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(800, 600);
        widget = new QWidget(MyWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 11, 781, 581));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        contactBook = new QTableWidget(widget);
        contactBook->setObjectName("contactBook");

        verticalLayout_2->addWidget(contactBook);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        horizontalLayout_4->addWidget(label_9);

        field_label_1 = new QLineEdit(widget);
        field_label_1->setObjectName("field_label_1");

        horizontalLayout_4->addWidget(field_label_1);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        horizontalLayout_3->addWidget(label_8);

        field_label_2 = new QLineEdit(widget);
        field_label_2->setObjectName("field_label_2");

        horizontalLayout_3->addWidget(field_label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        horizontalLayout_2->addWidget(label_7);

        field_label_3 = new QLineEdit(widget);
        field_label_3->setObjectName("field_label_3");

        horizontalLayout_2->addWidget(field_label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        field_label_4 = new QLineEdit(widget);
        field_label_4->setObjectName("field_label_4");

        horizontalLayout->addWidget(field_label_4);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        insertButton = new QPushButton(widget);
        insertButton->setObjectName("insertButton");

        horizontalLayout_5->addWidget(insertButton);

        exportButton = new QPushButton(widget);
        exportButton->setObjectName("exportButton");

        horizontalLayout_5->addWidget(exportButton);

        importButton = new QPushButton(widget);
        importButton->setObjectName("importButton");

        horizontalLayout_5->addWidget(importButton);


        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        label_9->setText(QCoreApplication::translate("MyWidget", "\345\255\270\350\231\237:", nullptr));
        label_8->setText(QCoreApplication::translate("MyWidget", "\347\217\255\347\264\232:", nullptr));
        label_7->setText(QCoreApplication::translate("MyWidget", "\345\247\223\345\220\215:", nullptr));
        label_6->setText(QCoreApplication::translate("MyWidget", "\351\233\273\350\251\261:", nullptr));
        insertButton->setText(QCoreApplication::translate("MyWidget", "\346\226\260\345\242\236", nullptr));
        exportButton->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\207\272", nullptr));
        importButton->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
