#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QMessageBox"
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

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if (username == "test" && password == "1234")
    {
        QMessageBox::information(this, "Login", "password and username correct");
    }
    else if (username == "" && password == "")
    {
        QMessageBox::warning(this, "warning", "You have not entered the username and password");
    }
    else if (username != "" && password == "")
    {
        QMessageBox::warning(this, "warning", "You have not entered a password");
    }
    else if (username == "" && password != "")
    {
        QMessageBox::warning(this, "warning", "You have not entered a username");
    }
    else
    {
        QMessageBox::warning(this, "warning", "Incorrect username and password");
    }
}
