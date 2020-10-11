#include "menuwidget.h"
#include "ui_menuwidget.h"

menuWidget::menuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menuWidget)
{
    ui->setupUi(this);
    ui->deleteButton->setDisabled(true);
    ui->insertButton->setDisabled(true);
    ui->findButton->setDisabled(true);
}

menuWidget::~menuWidget()
{
    delete ui;
}

void menuWidget::on_newButton_clicked()
{
    if(QMessageBox::No == QMessageBox::information(this,"提示","新建健康表会清除原有数据,是否新建",QMessageBox::Yes | QMessageBox::No)){
        return;
    }
    else{
        QFile file("student.txt");
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        file.close();
        ui->deleteButton->setDisabled(false);
        ui->insertButton->setDisabled(false);
        ui->findButton->setDisabled(false);
        emit display(1);
    }
}

void menuWidget::on_insertButton_clicked()
{
    emit display(2);
}

void menuWidget::on_deleteButton_clicked()
{
    emit display(3);
}

void menuWidget::on_findButton_clicked()
{
    emit display(4);
}

void menuWidget::on_printButton_clicked()
{
    emit display(5);
}

void menuWidget::on_exitButton_clicked()
{
    QApplication::exit();
}

void menuWidget::on_loadButton_clicked()
{
    QMessageBox::about(NULL,"提示","读取成功!");
    ui->deleteButton->setDisabled(false);
    ui->insertButton->setDisabled(false);
    ui->findButton->setDisabled(false);

}



