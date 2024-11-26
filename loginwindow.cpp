#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QPixmap>
#include <QGraphicsBlurEffect>
#include <QMouseEvent>

LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    this->setFixedSize(1100, 700); // Dimensiune fixă
    this->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint | Qt::FramelessWindowHint);

    // Creăm overlay-ul pentru fereastra principala
    QWidget *overlay = new QWidget(this);
    overlay->setStyleSheet(
        "background-color: rgba(0, 0, 0, 0.6);"
        "opacity: 1;"
        );
    overlay->setGeometry(this->rect()); // Setăm să acopere întreaga fereastră
    overlay->lower(); // Overlay-ul trebuie să fie sub alte widget-uri

    ui->loginForm->setFixedSize(360, 400);
    // Calcularea pozitiei de centrare formular inregistrare
    int x = (this->width() - ui->loginForm->width()) / 2; // centru pe orizontala
    int y = (this->height() - ui->loginForm->height()) / 2; // centru pe verticala

    ui->loginForm->move(x, y);

    // User Icon
    QPixmap pix2(":/img/resource/user.png");
    if (pix2.isNull())
    {
        qDebug() << "Imaginea nu a fost găsită sau încărcată!";
    } else {
        int w = ui->userIco->width();
        int h = ui->userIco->height();
        ui->userIco->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
    }

    // Stilizare pentru cele două QLineEdit
    ui->usernameLine->setStyleSheet(
        "QLineEdit {"
        "    border: none;"
        "    border-bottom: 2px solid gray;"
        "    font-size: 16px;"
        "    padding: 5px;"
        "    color: black;"
        "}"
        "QLineEdit:focus {"
        "    border-bottom: 2px solid purple;"
        "}"
        );

    ui->passLine->setStyleSheet(
        "QLineEdit {"
        "    border: none;"
        "    border-bottom: 2px solid gray;"
        "    font-size: 16px;"
        "    padding: 5px;"
        "    color: black;"
        "}"
        "QLineEdit:focus {"
        "    border-bottom: 2px solid purple;"
        "}"
        );

    // Password Icon
    QPixmap pix3(":/img/resource/padlock.png");
    if (pix3.isNull())
    {
        qDebug() << "Imaginea nu a fost găsită sau încărcată!";
    } else {
        int w = ui->passIco->width();
        int h = ui->passIco->height();
        ui->passIco->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));
    }

}

void LoginWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        isDragging = true;  // Începem mutarea
        dragStartPosition = event->globalPosition().toPoint() - frameGeometry().topLeft();
        event->accept();
    }
}

void LoginWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (isDragging) {
        move(event->globalPosition().toPoint() - dragStartPosition); // Mutăm fereastra
        event->accept();
    }
}

void LoginWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        isDragging = false;  // Terminăm mutarea
        event->accept();
    }
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_clicked()
{
    QApplication::quit();
}

