#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sig1 = new Signals(this);
    sig2 = new Signals(sig1);
}

MainWindow::~MainWindow()
{
    delete ui;

    delete sig1;
    delete sig2;
}

