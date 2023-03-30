#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit_username->setMaxLength(15);

    ui->lineEdit_password->setMaxLength(15);
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_show_password_clicked(bool checked)
{
    if (checked == true)
    {
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
    }
    else {
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    }
}
