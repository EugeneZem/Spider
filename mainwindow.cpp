#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sig1 = new Signals(this);

    connect(sig1, &Signals::sig_Signal, this, &MainWindow::ReceiveSignal);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ReceiveSignal()
{
    QString HTMLText = "Сигнал получен!";

    ui->textBrowser->setHtml(HTMLText);

    qDebug() << "Signal receive";
}


void MainWindow::on_pushButton_clicked()
{
    sig1->SendSignal();
}

