#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "menuwidget.h"
#include "newwidget.h"
#include "insertwidget.h"
#include "deletewidget.h"
#include "findwidget.h"
#include "printwidget.h"
#include <QStackedLayout>

namespace Ui {
class mainWidget;
}

class mainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit mainWidget(QWidget *parent = 0);
    ~mainWidget();

private:
    Ui::mainWidget *ui;
    menuWidget* MenuWidget;      //主菜单
    newWidget* NewWidget;        //新建学生健康表窗口
    insertWidget* InsertWidget;   //插入学生信息窗口
    deleteWidget* DeleteWidget;   //删除学生信息窗口
    findWidget* FindWidget;     //查询窗口
    printWidget* PrintWidget;    //输出窗口
    QStackedLayout* stackLayout;   //stackLayout布局
};

#endif // MAINWIDGET_H
