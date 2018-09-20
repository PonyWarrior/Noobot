#ifndef BOT_H
#define BOT_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>
#include "noscrypto.h"

class bot : public QObject
{
    Q_OBJECT
public:
    explicit bot(QObject *parent = nullptr);
    void send(QString packet,bool loginserver = false);
    void login(QString username,QString password,QString lip,qint16 lport,QString gip,qint16 gport,int ch);

signals:
    void showMsg(QString msg);

public slots:

private slots:
    void connected();
    void recievedPacket();
    void disconnected();
    void loginHelper();
    void sendPulsePacket();

private:
    QTcpSocket *socket;
    NosCrypto *crypt;
    bool loginServer;
    QByteArray encrypt(QString packet,bool loginserver = false);
    QString username;
    QString password;
    QString gameip;
    qint16 gameport;
    int sid;
    int pid;
    int character;
    QTimer *keepAlive;
    int runtime;
    bool loggedin;
    int getPid();
    void connectTo(QString ip,quint16 port);
    QStringList decrypt(QByteArray msg);

};

#endif // BOT_H
