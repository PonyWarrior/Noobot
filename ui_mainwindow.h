/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *login_password;
    QLineEdit *login_username;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *login_server_port;
    QLineEdit *login_server_ip;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *game_server_ip;
    QPushButton *login_btn;
    QLineEdit *game_server_port;
    QLabel *label_6;
    QComboBox *login_char;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *send_packet;
    QPushButton *send_packet_btn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QTextBrowser *packetlogger;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(789, 538);
        MainWindow->setToolTipDuration(1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setSizeIncrement(QSize(0, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        login_password = new QLineEdit(groupBox);
        login_password->setObjectName(QStringLiteral("login_password"));

        gridLayout->addWidget(login_password, 1, 1, 1, 1);

        login_username = new QLineEdit(groupBox);
        login_username->setObjectName(QStringLiteral("login_username"));

        gridLayout->addWidget(login_username, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        login_server_port = new QLineEdit(groupBox);
        login_server_port->setObjectName(QStringLiteral("login_server_port"));

        gridLayout->addWidget(login_server_port, 3, 1, 1, 1);

        login_server_ip = new QLineEdit(groupBox);
        login_server_ip->setObjectName(QStringLiteral("login_server_ip"));

        gridLayout->addWidget(login_server_ip, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        game_server_ip = new QLineEdit(groupBox);
        game_server_ip->setObjectName(QStringLiteral("game_server_ip"));

        gridLayout->addWidget(game_server_ip, 5, 0, 1, 1);

        login_btn = new QPushButton(groupBox);
        login_btn->setObjectName(QStringLiteral("login_btn"));

        gridLayout->addWidget(login_btn, 7, 1, 1, 1);

        game_server_port = new QLineEdit(groupBox);
        game_server_port->setObjectName(QStringLiteral("game_server_port"));

        gridLayout->addWidget(game_server_port, 5, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 1, 1, 1);

        login_char = new QComboBox(groupBox);
        login_char->addItem(QString());
        login_char->addItem(QString());
        login_char->addItem(QString());
        login_char->setObjectName(QStringLiteral("login_char"));

        gridLayout->addWidget(login_char, 7, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        send_packet = new QLineEdit(groupBox_2);
        send_packet->setObjectName(QStringLiteral("send_packet"));

        gridLayout_2->addWidget(send_packet, 0, 0, 1, 2);

        send_packet_btn = new QPushButton(groupBox_2);
        send_packet_btn->setObjectName(QStringLiteral("send_packet_btn"));

        gridLayout_2->addWidget(send_packet_btn, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 169, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        packetlogger = new QTextBrowser(centralWidget);
        packetlogger->setObjectName(QStringLiteral("packetlogger"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(packetlogger->sizePolicy().hasHeightForWidth());
        packetlogger->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(packetlogger);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 789, 20));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ClNos Example Source", nullptr));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "Example Source by marsbounty", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "Login", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Login Server IP", nullptr));
        label->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Game Server IP", nullptr));
        login_server_port->setText(QApplication::translate("MainWindow", "4000", nullptr));
        login_server_ip->setText(QApplication::translate("MainWindow", "46.105.115.121", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Login Server Port", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Char Slot", nullptr));
        game_server_ip->setText(QApplication::translate("MainWindow", "46.105.115.121", nullptr));
        login_btn->setText(QApplication::translate("MainWindow", "Login", nullptr));
        game_server_port->setText(QApplication::translate("MainWindow", "4110", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Game Server Port", nullptr));
        login_char->setItemText(0, QApplication::translate("MainWindow", "0", nullptr));
        login_char->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        login_char->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));

        groupBox_2->setTitle(QApplication::translate("MainWindow", "Packet Sender", nullptr));
        send_packet_btn->setText(QApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
