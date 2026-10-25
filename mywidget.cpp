#include "mywidget.h"
#include "ui_mywidget.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QTableWidgetItem>
#include <QStringList>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    ui->contactBook->setColumnCount(4);

    QStringList colTitle;
    colTitle << "學號" << "班級" << "姓名" << "電話";

    ui->contactBook->setHorizontalHeaderLabels(colTitle);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_insertButton_clicked()
{
    QTableWidgetItem *item1, *item2, *item3, *item4;

    item1 = new QTableWidgetItem(QString(ui->field_label_1->text()));
    item2 = new QTableWidgetItem(QString(ui->field_label_2->text()));
    item3 = new QTableWidgetItem(QString(ui->field_label_3->text()));
    item4 = new QTableWidgetItem(QString(ui->field_label_4->text()));

    ui->contactBook->insertRow(ui->contactBook->rowCount());

    ui->contactBook->setItem(ui->contactBook->rowCount()-1, 0, item1);
    ui->contactBook->setItem(ui->contactBook->rowCount()-1, 1, item2);
    ui->contactBook->setItem(ui->contactBook->rowCount()-1, 2, item3);
    ui->contactBook->setItem(ui->contactBook->rowCount()-1, 3, item4);
}

void MyWidget::on_exportButton_clicked()
{
    QString fileName;
    QString saveStr;

    fileName = QFileDialog::getSaveFileName(
        this,
        "匯出通訊錄",
        ".",
        "csv(*.csv);;text(*.txt)"
        );

    if (fileName.isEmpty())
        return;

    for (int i = 0; i < ui->contactBook->rowCount(); i++)
    {
        for (int j = 0; j < ui->contactBook->columnCount(); j++)
        {
            if (ui->contactBook->item(i, j))
                saveStr += ui->contactBook->item(i, j)->text();

            saveStr += ",";
        }

        saveStr += "\n";
    }

    QFile file(fileName);

    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out << saveStr;
        file.close();
    }
}

void MyWidget::on_importButton_clicked()
{
    QString fileName;

    fileName = QFileDialog::getOpenFileName(
        this,
        "匯入通訊錄",
        ".",
        "csv(*.csv)"
        );

    if (fileName.isEmpty())
        return;

    QFile file(fileName);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);

        ui->contactBook->setRowCount(0);

        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList data = line.split(",");

            if (data.size() < 4)
                continue;

            int row = ui->contactBook->rowCount();

            ui->contactBook->insertRow(row);

            for (int col = 0; col < 4; col++)
            {
                ui->contactBook->setItem(
                    row,
                    col,
                    new QTableWidgetItem(data[col])
                    );
            }
        }

        file.close();
    }
}