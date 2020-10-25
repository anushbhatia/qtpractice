#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCursor>
#include <QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool toggle=true;
// using css
void MainWindow::on_pushButton_clicked()
{

    if(toggle)
    {
        ui->lineEdit->setStyleSheet("font-weight: bold;");
        toggle=false;
    }
    else
    {
    ui->lineEdit->setStyleSheet("font-weight: normal;");
    toggle=true;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.clearSelection();
    if(toggle)
    {

        ui->textEdit->setFontWeight(99);
        toggle=false;
    }
    else
    {
       ui->textEdit->setFontWeight(1);
       toggle=true;
    }

}
