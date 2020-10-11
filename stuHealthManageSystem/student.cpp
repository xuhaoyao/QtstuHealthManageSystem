#include "student.h"

LinkNode::LinkNode(QString n,QString b,QString s,QString bh,long long i,int ci,LinkNode* next)
{
    name = n;
    birthday = b;
    sex = s;
    bodyHealth = bh;
    id = i;
    classid = ci;
    link = next;
}

void StudentInf::clear()
{
    while(first->link != nullptr){
    LinkNode* p = first->link;
    first->link = p->link;
    delete p;
    }
}

void StudentInf::insertFront(QString n,QString b,QString s,QString bh,long long i,int ci)
{
    LinkNode* newNode = new LinkNode(n,b,s,bh,i,ci);
    newNode->link = first->link;
    first->link = newNode;
}

LinkNode* StudentInf::find(int classid,long long id)
{
    LinkNode* it = first;
    while(it->link != nullptr){
        it = it->link;
        if(it->classid == classid && it->id == id)
            return it;
    }
    return nullptr;
}

bool StudentInf::Delete(QString name,int classid,long long id)
{
    LinkNode* itor = first->link,*pre = first;
    while(itor != nullptr){
        if(itor->name == name && itor->classid == classid && itor->id == id){
            LinkNode* del = itor;
            pre->link = del->link;
            delete del;
            return true;
        }
        pre = itor;
        itor = itor->link;
    }
    return false;
}
