#include "deletewidget.h"
#include "ui_deletewidget.h"

deleteWidget::deleteWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteWidget)
{
    ui->setupUi(this);
}

deleteWidget::~deleteWidget()
{
    delete ui;
}

void deleteWidget::on_deleteButton_clicked()
{
    if(ui->classidlineEdit->text() == "" || ui->idlineEdit->text() == "" || ui->namelineEdit->text() == ""){
        QMessageBox::about(NULL,"反馈","请将信息填写完整再点击删除");
        return;
    }
    if(QMessageBox::No == QMessageBox::information(this,"提示","删除之后学生信息将丢失喔，确认删除吗",QMessageBox::Yes | QMessageBox::No))
        return;

    StudentInf List;
    QFile file("student.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!file.isOpen()){
        QMessageBox::about(NULL,"提示","数据文件打开失败");
        return;
    }

    QTextStream inp(&file);
    while(!inp.atEnd()){
        QString name,birthday,sex,bodyHealth;
        long long id;
        int classid;
        //    out << id << " " << name << " " << classid << " " << birthday << " " << sex << " " << bodyHealth <<endl;
        inp >> id >> name >> classid >> birthday >> sex >> bodyHealth;
        if(inp.atEnd()){
            break;
        }
        List.insertFront(name,birthday,sex,bodyHealth,id,classid);
    }
    file.close();

    int classId = ui->classidlineEdit->text().toInt();
    long long Id = ui->idlineEdit->text().toLongLong();
    QString Name = ui->namelineEdit->text();
    if(List.Delete(Name,classId,Id)){
        QMessageBox::about(NULL,"反馈","删除成功!");
        file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
        if(!file.isOpen()){
            QMessageBox::about(NULL,"反馈","数据文件打开失败!");
            return;
        }
        QTextStream out(&file);
        LinkNode* itor = List.getHead();
        while(itor->link != nullptr){
            itor = itor->link;
            out << itor->id << " " << itor->name << " " << itor->classid << " " << itor->birthday << " " << itor->sex << " " << itor->bodyHealth <<endl;
        }
        file.close();
    }
    else{
        QMessageBox::about(NULL,"反馈","删除失败,请检查信息是否填写正确");
    }
}
