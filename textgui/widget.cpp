#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QTextStream>
#include <QCloseEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::closeEvent(QCloseEvent *event)
{
    quitting = true;
    event->accept();
}


void Widget::on_input_edit_textChanged(const QString &arg1){
    if (currentlySearching)
    {
        needReset = true;
    } else
    {
        DoStuff(arg1);
    }
}


void Widget::DoStuff(const QString &str)
{
    do {
        needReset = false;
        currentlySearching = true;

        ui->result_text->clear();

        QFile dictionary("words.txt");

        if (!dictionary.open(QIODevice::ReadOnly)) {
            qWarning("Cannot open file for reading");
            return;
          }

        QTextStream in(&dictionary);

        QString line;
        QString key = ui->input_edit->text();

        qsizetype counter;

        while (!in.atEnd()) {
            if(quitting) { dictionary.close(); return; }

            line = in.readLine();
            counter = 0;
            // Обработка слова
            for (int i = 0; i < line.size(); i++) {
                if (ui->input_edit->text().isEmpty())
                    break;
                if (line[i] == key[counter]) {
                    counter++;
                }
                if(counter == key.size()) {
                    ui->result_text->append(line);
                    break;
                }
            }
            QCoreApplication::processEvents();
            if(needReset) break;
        }
        currentlySearching = false;
        dictionary.close();

    } while (needReset == true);

}
