#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_checkBox_show_password_clicked(bool checked);

private:
    Ui::MainWindow *ui;

private slots:
    void activation_button();
    void on_pushButton_Login_clicked();
};

#endif // MAINWINDOW_H
