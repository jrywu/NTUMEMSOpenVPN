/********************************************************************************
** Form generated from reading UI file 'appinfo.ui'
**
** Created: Mon Dec 31 03:17:52 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPINFO_H
#define UI_APPINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_appInfo
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *cmdClose;
    QLabel *label_11;
    QLabel *label_7;

    void setupUi(QDialog *appInfo)
    {
        if (appInfo->objectName().isEmpty())
            appInfo->setObjectName(QString::fromUtf8("appInfo"));
        appInfo->setWindowModality(Qt::ApplicationModal);
        appInfo->resize(400, 160);
        appInfo->setMinimumSize(QSize(400, 160));
        appInfo->setMaximumSize(QSize(400, 160));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        appInfo->setWindowIcon(icon);
        appInfo->setModal(true);
        label = new QLabel(appInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 301));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(appInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, 10, 431, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Reference Sans Serif"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(appInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-20, 40, 411, 16));
        label_5 = new QLabel(appInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 60, 221, 20));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(appInfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 80, 111, 20));
        label_6->setAlignment(Qt::AlignCenter);
        cmdClose = new QPushButton(appInfo);
        cmdClose->setObjectName(QString::fromUtf8("cmdClose"));
        cmdClose->setGeometry(QRect(280, 110, 100, 33));
        cmdClose->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/close_dialog.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdClose->setIcon(icon1);
        cmdClose->setIconSize(QSize(22, 22));
        cmdClose->setDefault(true);
        cmdClose->setFlat(true);
        label_11 = new QLabel(appInfo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 120, 111, 16));
        label_7 = new QLabel(appInfo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 30, 221, 20));
        label_7->setAlignment(Qt::AlignCenter);

        retranslateUi(appInfo);

        QMetaObject::connectSlotsByName(appInfo);
    } // setupUi

    void retranslateUi(QDialog *appInfo)
    {
        appInfo->setWindowTitle(QApplication::translate("appInfo", "About", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("appInfo", "NTUMEMS OpevnVpn CLient 0.9.7", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("appInfo", "_____________________________________________________________________", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("appInfo", "For NTUMEMS Group Internal Use Only!! ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("appInfo", "Do not redistribute!!", 0, QApplication::UnicodeUTF8));
        cmdClose->setText(QApplication::translate("appInfo", "&Close", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("appInfo", "intra.ntumems.net", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("appInfo", "Based on Securepoint SSL VPN.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class appInfo: public Ui_appInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPINFO_H
