#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_login_btn_clicked();
    void showMsg(QString msg);

    void on_send_packet_btn_clicked();

private:
    Ui::MainWindow *ui;
    bot *bot1;
};

#endif // MAINWINDOW_H
