/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcpClient
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *username;
    QLabel *password;
    QLineEdit *pwd_le;
    QPushButton *login;
    QLineEdit *username_le;
    QPushButton *zhuce;
    QPushButton *zhuxiao;

    void setupUi(QWidget *tcpClient)
    {
        if (tcpClient->objectName().isEmpty())
            tcpClient->setObjectName("tcpClient");
        tcpClient->resize(459, 327);
        widget = new QWidget(tcpClient);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 11, 391, 281));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        username = new QLabel(widget);
        username->setObjectName("username");
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(16);
        username->setFont(font);

        gridLayout->addWidget(username, 0, 0, 1, 1);

        password = new QLabel(widget);
        password->setObjectName("password");
        password->setFont(font);

        gridLayout->addWidget(password, 1, 0, 1, 1);

        pwd_le = new QLineEdit(widget);
        pwd_le->setObjectName("pwd_le");

        gridLayout->addWidget(pwd_le, 1, 1, 1, 1);

        login = new QPushButton(widget);
        login->setObjectName("login");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(12);
        login->setFont(font1);

        gridLayout->addWidget(login, 2, 1, 1, 1);

        username_le = new QLineEdit(widget);
        username_le->setObjectName("username_le");

        gridLayout->addWidget(username_le, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        zhuce = new QPushButton(widget);
        zhuce->setObjectName("zhuce");

        gridLayout_2->addWidget(zhuce, 1, 0, 1, 1);

        zhuxiao = new QPushButton(widget);
        zhuxiao->setObjectName("zhuxiao");

        gridLayout_2->addWidget(zhuxiao, 1, 1, 1, 1);


        retranslateUi(tcpClient);

        QMetaObject::connectSlotsByName(tcpClient);
    } // setupUi

    void retranslateUi(QWidget *tcpClient)
    {
        tcpClient->setWindowTitle(QCoreApplication::translate("tcpClient", "tcpClient", nullptr));
        username->setText(QCoreApplication::translate("tcpClient", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        password->setText(QCoreApplication::translate("tcpClient", "\345\257\206 \347\240\201\357\274\232", nullptr));
        login->setText(QCoreApplication::translate("tcpClient", "\347\231\273\345\275\225", nullptr));
        zhuce->setText(QCoreApplication::translate("tcpClient", "\346\263\250\345\206\214", nullptr));
        zhuxiao->setText(QCoreApplication::translate("tcpClient", "\346\263\250\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tcpClient: public Ui_tcpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
