#ifndef DELETEWIDGET_H
#define DELETEWIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "student.h"

namespace Ui {
class deleteWidget;
}

class deleteWidget : public QWidget
{
    Q_OBJECT

public:
    explicit deleteWidget(QWidget *parent = 0);
    ~deleteWidget();

private:
    Ui::deleteWidget *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked() {emit display(0); }
    void on_deleteButton_clicked();
};

#endif // DELETEWIDGET_H
