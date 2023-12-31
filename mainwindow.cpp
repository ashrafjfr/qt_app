#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_upButton_clicked()
{
    ui->display->setText(QString("UP"));
}

void MainWindow::on_rightButton_clicked()
{
    ui->display->setText(QString("RIGHT"));
}

void MainWindow::on_downButton_clicked()
{
    ui->display->setText(QString("DOWN"));
}

void MainWindow::on_leftButton_clicked()
{
    ui->display->setText(QString("LEFT"));
}
