#ifndef FINDWIDGET_H
#define FINDWIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "student.h"

namespace Ui {
class findWidget;
}

class findWidget : public QWidget
{
    Q_OBJECT

public:
    explicit findWidget(QWidget *parent = 0);
    ~findWidget();

private:
    Ui::findWidget *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked() {emit display(0); }
    void on_findButton_clicked();
};

#endif // FINDWIDGET_H
