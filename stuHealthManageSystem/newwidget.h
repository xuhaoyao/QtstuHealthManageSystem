#ifndef NEWWIDGET_H
#define NEWWIDGET_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "menuwidget.h"


namespace Ui {
class newWidget;
}

class newWidget : public QWidget
{
    Q_OBJECT

public:
    explicit newWidget(QWidget *parent = 0);
    ~newWidget();

private:
    Ui::newWidget *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked() {emit display(0); }
    void on_addButton_clicked();
};

#endif // NEWWIDGET_H
