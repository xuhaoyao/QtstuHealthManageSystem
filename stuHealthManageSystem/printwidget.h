#ifndef PRINTWIDGET_H
#define PRINTWIDGET_H

#include <QWidget>
#include <QFile>
#include <QStringList>
#include <QTextStream>
#include <QMessageBox>
#include "student.h"

namespace Ui {
class printWidget;
}

class printWidget : public QWidget
{
    Q_OBJECT

public:
    explicit printWidget(QWidget *parent = 0);
    ~printWidget();

private:
    Ui::printWidget *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked();
    void on_showButton_clicked();
};

#endif // PRINTWIDGET_H
