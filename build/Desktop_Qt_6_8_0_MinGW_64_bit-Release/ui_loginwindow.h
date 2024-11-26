/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QFrame *loginForm;
    QLabel *title;
    QGroupBox *groupBox;
    QPushButton *loginButt;
    QLineEdit *passLine;
    QLineEdit *usernameLine;
    QLabel *userIco;
    QLabel *passIco;
    QPushButton *pushButton;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(1100, 700);
        LoginWindow->setStyleSheet(QString::fromUtf8("QDialog {\n"
"position: relative;\n"
"height: 100%;\n"
"width: 100%;\n"
"background-image: url(:/img/resource/bg.jpg);\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"}"));
        LoginWindow->setSizeGripEnabled(false);
        loginForm = new QFrame(LoginWindow);
        loginForm->setObjectName("loginForm");
        loginForm->setGeometry(QRect(420, 180, 360, 400));
        loginForm->setAutoFillBackground(false);
        loginForm->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"width: 100%;\n"
"background: #fff;\n"
"border-radius: 25px;"));
        loginForm->setFrameShape(QFrame::Shape::StyledPanel);
        loginForm->setFrameShadow(QFrame::Shadow::Raised);
        title = new QLabel(loginForm);
        title->setObjectName("title");
        title->setGeometry(QRect(120, 20, 131, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cascadia Mono SemiBold")});
        font.setBold(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("font-size: 39px;\n"
"color: #0b0217;"));
        groupBox = new QGroupBox(loginForm);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 70, 331, 311));
        loginButt = new QPushButton(groupBox);
        loginButt->setObjectName("loginButt");
        loginButt->setGeometry(QRect(70, 240, 191, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("JetBrains Mono NL SemiBold")});
        font1.setBold(true);
        font1.setItalic(false);
        loginButt->setFont(font1);
        loginButt->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        loginButt->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: white;\n"
"background: #7d2ae8;\n"
"width: 100%;\n"
"padding: 10px 0;\n"
"border-radius: 10px;\n"
""));
        passLine = new QLineEdit(groupBox);
        passLine->setObjectName("passLine");
        passLine->setGeometry(QRect(60, 150, 261, 51));
        passLine->setReadOnly(false);
        usernameLine = new QLineEdit(groupBox);
        usernameLine->setObjectName("usernameLine");
        usernameLine->setGeometry(QRect(60, 50, 261, 51));
        usernameLine->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        usernameLine->setStyleSheet(QString::fromUtf8(""));
        userIco = new QLabel(groupBox);
        userIco->setObjectName("userIco");
        userIco->setGeometry(QRect(0, 60, 31, 31));
        passIco = new QLabel(groupBox);
        passIco->setObjectName("passIco");
        passIco->setGeometry(QRect(0, 160, 31, 31));
        pushButton = new QPushButton(loginForm);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 10, 51, 41));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::WindowClose));
        pushButton->setIcon(icon);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        groupBox->setTitle(QString());
        loginButt->setText(QCoreApplication::translate("LoginWindow", "Login Now", nullptr));
        passLine->setText(QString());
        passLine->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter your password", nullptr));
        usernameLine->setText(QString());
        usernameLine->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter your email", nullptr));
        userIco->setText(QString());
        passIco->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
