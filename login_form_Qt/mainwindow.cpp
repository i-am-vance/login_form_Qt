#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit_username->setMaxLength(15);

    ui->lineEdit_password->setMaxLength(15);
}

MainWindow::~MainWindow()
{
    delete ui;
}
