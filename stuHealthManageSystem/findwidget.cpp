#include "findwidget.h"
#include "ui_findwidget.h"

findWidget::findWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::findWidget)
{
    ui->setupUi(this);
}

findWidget::~findWidget()
{
    delete ui;
}

void findWidget::on_findButton_clicked()
{
    if(ui->classidlineEdit->text() == "" || ui->idlineEdit->text() == ""){
        QMessageBox::about(NULL,"反馈","请填写完整再查询");
        return;
    }
    int classId = ui->classidlineEdit->text().toInt();
    long long Id = ui->idlineEdit->text().toLongLong();

    QFile file("student.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!file.isOpen()){
        QMessageBox::about(NULL,"反馈","数据文件打开失败!");
        return;
    }

    QTextStream inp(&file);
    StudentInf List;
    while(!inp.atEnd()){
        QString name,birthday,sex,bodyHealth;
        long long id;
        int classid;
        //    out << id << " " << name << " " << classid << " " << birthday << " " << sex << " " << bodyHealth <<endl;
        inp >> id >> name >> classid >> birthday >> sex >> bodyHealth;
        if(inp.atEnd()) break;
        List.insertFront(name,birthday,sex,bodyHealth,id,classid);
    }
    file.close();

    LinkNode* ans = List.find(classId,Id);
    if(ans != nullptr){
        QMessageBox::about(NULL,"反馈","查找成功!");
        ui->namelabel->setText(QString(ans->getName()));
        ui->bodylabel->setText(QString(ans->getBodyHealth()));
        ui->birthdaylabel->setText(QString(ans->getBirthday()));
        ui->sexlabel->setText(QString(ans->getSex()));
    }
    else{
        QMessageBox::about(NULL,"反馈","未找到该学生,请确认信息是否填写正确!");
        ui->namelabel->setText(QString("NULL"));
        ui->bodylabel->setText(QString("NULL"));
        ui->birthdaylabel->setText(QString("NULL"));
        ui->sexlabel->setText(QString("NULL"));
    }
}
