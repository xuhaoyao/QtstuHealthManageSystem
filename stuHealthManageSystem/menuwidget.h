#ifndef MENUWIDGET_H
#define MENUWIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

namespace Ui {
class menuWidget;
}

class menuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit menuWidget(QWidget *parent = 0);
    ~menuWidget();

private:
    Ui::menuWidget *ui;

signals:
    void display(int number);

private slots:
    void on_newButton_clicked();
    void on_insertButton_clicked();
    void on_deleteButton_clicked();
    void on_findButton_clicked();
    void on_printButton_clicked();
    void on_exitButton_clicked();
    void on_saveButton_clicked() {QMessageBox::about(NULL,"提示","保存成功!");}
    void on_loadButton_clicked();
};

#endif // MENUWIDGET_H
