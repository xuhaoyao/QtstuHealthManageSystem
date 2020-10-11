#ifndef INSERTWIDGET_H
#define INSERTWIDGET_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

namespace Ui {
class insertWidget;
}

class insertWidget : public QWidget
{
    Q_OBJECT

public:
    explicit insertWidget(QWidget *parent = 0);
    ~insertWidget();

private:
    Ui::insertWidget *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked() {emit display(0); }
    void on_insertButton_clicked();
};

#endif // INSERTWIDGET_H
