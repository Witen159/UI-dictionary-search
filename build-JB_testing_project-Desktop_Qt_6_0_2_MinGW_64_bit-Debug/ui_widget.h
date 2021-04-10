/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *search_label;
    QLineEdit *input_edit;
    QLabel *result_label;
    QTextEdit *result_text;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(698, 433);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        search_label = new QLabel(Widget);
        search_label->setObjectName(QString::fromUtf8("search_label"));

        gridLayout->addWidget(search_label, 0, 0, 1, 1);

        input_edit = new QLineEdit(Widget);
        input_edit->setObjectName(QString::fromUtf8("input_edit"));

        gridLayout->addWidget(input_edit, 1, 0, 1, 1);

        result_label = new QLabel(Widget);
        result_label->setObjectName(QString::fromUtf8("result_label"));

        gridLayout->addWidget(result_label, 2, 0, 1, 1);

        result_text = new QTextEdit(Widget);
        result_text->setObjectName(QString::fromUtf8("result_text"));
        result_text->setReadOnly(true);

        gridLayout->addWidget(result_text, 3, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        search_label->setText(QCoreApplication::translate("Widget", "Search", nullptr));
        result_label->setText(QCoreApplication::translate("Widget", "Results of search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
