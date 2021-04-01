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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *input_edit;
    QLabel *search_label;
    QLabel *result_label;
    QTextEdit *result_text;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(698, 433);
        input_edit = new QLineEdit(Widget);
        input_edit->setObjectName(QString::fromUtf8("input_edit"));
        input_edit->setGeometry(QRect(0, 20, 701, 31));
        search_label = new QLabel(Widget);
        search_label->setObjectName(QString::fromUtf8("search_label"));
        search_label->setGeometry(QRect(0, 0, 61, 16));
        result_label = new QLabel(Widget);
        result_label->setObjectName(QString::fromUtf8("result_label"));
        result_label->setGeometry(QRect(0, 60, 101, 16));
        result_text = new QTextEdit(Widget);
        result_text->setObjectName(QString::fromUtf8("result_text"));
        result_text->setGeometry(QRect(0, 80, 701, 361));
        result_text->setReadOnly(true);

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
