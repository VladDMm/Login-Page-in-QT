#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
private slots:
    void on_pushButton_clicked();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    Ui::LoginWindow *ui;
    bool isDragging = false;         // Indică dacă fereastra este mutată
    QPoint dragStartPosition;       // Punctul de început pentru drag
};

#endif // LOGINWINDOW_H
