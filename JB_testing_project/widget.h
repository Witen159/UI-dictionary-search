#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCoreApplication>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:

private slots:
    void on_input_edit_textChanged(const QString &arg1);

private:
    Ui::Widget *ui;
    bool currentlySearching = false;
    bool needReset = false;
    bool quitting = false;


    void DoStuff(const QString &str);
private:
    void closeEvent(QCloseEvent *event) override;
};


#endif // WIDGET_H
