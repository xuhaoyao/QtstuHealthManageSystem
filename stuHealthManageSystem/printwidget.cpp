#include "printwidget.h"
#include "ui_printwidget.h"

printWidget::printWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::printWidget)
{
    ui->setupUi(this);
    QStringList info;
    info << tr("班级")<< tr("学号") <<tr("姓名") <<tr("性别")<<tr("出生日期")<<tr("身体状况");

    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderLabels(info);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

printWidget::~printWidget()
{
    delete ui;
}

void printWidget::on_showButton_clicked()
{
    StudentInf List;
    QFile file("student.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!file.isOpen()){
        QMessageBox::about(NULL,"反馈","数据文件打开失败!");
        return;
    }

    QTextStream inp(&file);
    int count = 0;
    while(!inp.atEnd()){
        QString name,birthday,sex,bodyHealth;
        long long id;
        int classid;
        //    out << id << " " << name << " " << classid << " " << birthday << " " << sex << " " << bodyHealth <<endl;
        inp >> id >> name >> classid >> birthday >> sex >> bodyHealth;
        if(inp.atEnd()) break;
        List.insertFront(name,birthday,sex,bodyHealth,id,classid);
        count++;
    }
    file.close();

    ui->tableWidget->setRowCount(count);

    int row = 0,column = 0;
    LinkNode* p = List.getHead();
    if(p->link == nullptr) QMessageBox::about(NULL,"反馈","没有学生数据");
    while(p->link != nullptr){
        p = p->link;
        QString name,birthday,sex,bodyHealth;
        long long id;
        int classid;
        name = p->getName();
        birthday = p->getBirthday();
        sex = p->getSex();
        bodyHealth = p->getBodyHealth();
        id = p->getId();
        classid = p->getClassId();
        //    info << tr("班级")<< tr("学号") <<tr("姓名") <<tr("性别")<<tr("出生日期")<<tr("身体状况");
        ui->tableWidget->setItem(row,column++,new QTableWidgetItem(QString::number(classid)));
        ui->tableWidget->setItem(row,column++,new QTableWidgetItem(QString::number(id)));
        ui->tableWidget->setItem(row,column++,new QTableWidgetItem(name));
        ui->tableWidget->setItem(row,column++,new QTableWidgetItem(sex));
        ui->tableWidget->setItem(row,column++,new QTableWidgetItem(birthday));
        ui->tableWidget->setItem(row,column++,new QTableWidgetItem(bodyHealth));
        row++;column = 0;
    }
}

void printWidget::on_returnButton_clicked()
{
    ui->tableWidget->clearContents();
    emit display(0);
}
