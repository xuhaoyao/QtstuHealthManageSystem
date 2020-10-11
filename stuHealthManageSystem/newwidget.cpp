#include "newwidget.h"
#include "ui_newwidget.h"

newWidget::newWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newWidget)
{
    ui->setupUi(this);
}

newWidget::~newWidget()
{
    delete ui;
}

void newWidget::on_addButton_clicked()
{
    if(ui->nameLineEdit->text() == "" || ui->idLineEdit->text() == "" || ui->classidLineEdit->text() == "" ||
            ui->sexLineEdit->text() == "" || ui->healthLineEdit->text() == "" || ui->birthdayLineEdit->text() == ""){
        //插入的五项数据都不能为空，否则在读取文件时会出现问题。
        QMessageBox::about(NULL, "反馈", "存在空项,请填写完整再点击添加");
        return;
    }

    QFile file("student.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append);
    if(!file.isOpen()){
        QMessageBox::about(NULL,"反馈","数据文件打开失败!");
        return;
    }
    QString name = ui->nameLineEdit->text();
    QString birthday = ui->birthdayLineEdit->text();
    QString sex = ui->sexLineEdit->text();
    QString bodyHealth = ui->healthLineEdit->text();
    long long id = ui->idLineEdit->text().toLongLong();
    int classid = ui->classidLineEdit->text().toInt();

    QTextStream out(&file);
    out << id << " " << name << " " << classid << " " << birthday << " " << sex << " " << bodyHealth <<endl;
    file.close();

    ui->birthdayLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->sexLineEdit->clear();
    ui->idLineEdit->clear();
    ui->classidLineEdit->clear();
    ui->healthLineEdit->clear();

    QMessageBox::about(NULL,"反馈","添加成功!");
}
