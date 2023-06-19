#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
    qDebug() << "UP";
}

void MainWindow::on_rightButton_clicked()
{
    qDebug() << "RIGHT";
}

void MainWindow::on_downButton_clicked()
{
    qDebug() << "DOWN";
}

void MainWindow::on_leftButton_clicked()
{
    qDebug() << "LEFT";
}
