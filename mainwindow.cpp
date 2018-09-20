#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "noscrypto.h"
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    NosCrypto::setClientXhash("3d45ed2f6085a8ed0aa8c3edd9518e85");   //md5 of NostaleClientX.exe
    NosCrypto::setClienthash("3d45ed2f6085a8ed0aa8c3edd9518e85");   //md5 of NostaleClient.exe
    NosCrypto::setVersion("0.9.5.38");                        //Version of NostaleClient.exe

    bot1 = new bot();

    connect(bot1,SIGNAL(showMsg(QString)),this,SLOT(showMsg(QString)));

    QTime time = QTime::currentTime();      //Set seed for random generated numbers
    qsrand((uint)time.msec());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_btn_clicked()
{
    QString username = ui->login_username->text();
    QString password = ui->login_password->text();
    QString loginip =  ui->login_server_ip->text();
    qint16 loginport = ui->login_server_port->text().toInt();
    QString gameip =   ui->game_server_ip->text();
    qint16 gameport =  ui->game_server_port->text().toInt();
    int ch =           ui->login_char->currentText().toInt();
    ui->login_btn->setEnabled(false);
    bot1->login(username,password,loginip,loginport,gameip,gameport,ch);
}

void MainWindow::showMsg(QString msg)
{
    ui->packetlogger->append(msg);
}

void MainWindow::walk()
{

}

void MainWindow::on_send_packet_btn_clicked()
{
    bot1->send(ui->send_packet->text());
}
