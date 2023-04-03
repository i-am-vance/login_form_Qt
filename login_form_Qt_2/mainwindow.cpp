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

    ui->pushButton_Login->setEnabled(false);

    connect(ui->lineEdit_username, &QLineEdit::textChanged, this, &MainWindow::activation_button);
    connect(ui->lineEdit_password, &QLineEdit::textChanged, this, &MainWindow::activation_button);

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
    else
    {
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    }
}

void MainWindow::activation_button()
{
    if (ui->lineEdit_username->text().length() > 0 && ui->lineEdit_password->text().length() > 0)
    {
        ui->pushButton_Login->setEnabled(true);
    }
    else
    {
        ui->pushButton_Login->setEnabled(false);
    }
}
