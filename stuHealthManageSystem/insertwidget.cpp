#include "insertwidget.h"
#include "ui_insertwidget.h"

insertWidget::insertWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::insertWidget)
{
    ui->setupUi(this);
}

insertWidget::~insertWidget()
{
    delete ui;
}

void insertWidget::on_insertButton_clicked()
{
    if(ui->namelineEdit->text() == "" || ui->idlineEdit->text() == "" || ui->classidlineEdit->text() == "" ||
            ui->sexlineEdit->text() == "" || ui->bodylineEdit->text() == "" || ui->birthdaylineEdit->text() == ""){
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
    QString name = ui->namelineEdit->text();
    QString birthday = ui->birthdaylineEdit->text();
    QString sex = ui->sexlineEdit->text();
    QString bodyHealth = ui->bodylineEdit->text();
    long long id = ui->idlineEdit->text().toLongLong();
    int classid = ui->classidlineEdit->text().toInt();

    QTextStream out(&file);
    out << id << " " << name << " " << classid << " " << birthday << " " << sex << " " << bodyHealth <<endl;
    file.close();

    ui->birthdaylineEdit->clear();
    ui->namelineEdit->clear();
    ui->sexlineEdit->clear();
    ui->idlineEdit->clear();
    ui->classidlineEdit->clear();
    ui->bodylineEdit->clear();

    QMessageBox::about(NULL,"反馈","插入成功!");
}
