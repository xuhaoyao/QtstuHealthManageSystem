#include "mainwidget.h"
#include <QApplication>
#include "student.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainWidget w;
    w.show();
    return a.exec();
}
