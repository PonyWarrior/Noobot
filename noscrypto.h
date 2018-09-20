#ifndef NOSCRYPTO_H
#define NOSCRYPTO_H
#include <string>
#include <vector>
#include <QObject>
#include <QByteArray>

class NosCrypto : public QObject
{
	Q_OBJECT
public:
    explicit NosCrypto(QObject *parent = nullptr);
    QByteArray encryptGamePacket(const QString& buf, int session, bool is_session_packet = 0) const;
    std::vector<unsigned char> encryptLoginPacket(const QString& buf) const;
    QString decryptLoginPacket(const QByteArray& ba, std::size_t len) const;
    QStringList decryptGamePacket(const QByteArray& inp, std::size_t len);
    QString createLoginHash(const QString& user) const;
    QString createLoginVersion(void) const;
    int randomNumber(int min, int max) const;
    QString Sha512(const QString plainText) const;
    QByteArray createLoginPacket(const QString& username,const QString& password) const;
    void randomize() const;
    QString pwEncrypt(QString pw) const;

    static void setClientXhash(const QString &value);
    static void setClienthash(const QString &value);
    static void setVersion(const QString &value);

signals:

public slots:

private:
    static QString clientXhash;
    static QString clienthash;
    static QString version;

    void completeGamePacketEncrypt(std::vector<unsigned char>& buf, int session, bool is_session_packet = 0) const;
    QByteArray bigPacket;
    std::string last_current_packet;
    std::vector<unsigned char> last_buf;
};
#endif // NOSCRYPTO_H
