#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QDebug>

struct LinkNode {
    QString name,birthday,sex,bodyHealth;
    long long id;
    int classid;
    LinkNode* link;
    LinkNode() { link = nullptr; }
    LinkNode(QString n,QString b,QString s,QString bh,long long i,int ci,LinkNode* next = nullptr);
    QString getName() { return name; }
    QString getBirthday() { return birthday; }
    QString getSex() { return sex; }
    QString getBodyHealth() { return bodyHealth; }
    long long getId() { return id; }
    int getClassId() { return classid; }
};

class StudentInf
{
private:
    LinkNode* first;
public:
    StudentInf() { first = new LinkNode(); }
    LinkNode* getHead() { return first; }
    void clear();
    void insertFront(QString n,QString b,QString s,QString bh,long long i,int ci);
    LinkNode* find(int classid,long long id);
    bool Delete(QString name,int classid,long long id);
};


#endif // STUDENT_H
