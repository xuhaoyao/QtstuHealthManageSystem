/********************************************************************************
** Form generated from reading UI file 'findwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDWIDGET_H
#define UI_FINDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findWidget
{
public:
    QPushButton *returnButton;
    QPushButton *findButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *classidlineEdit;
    QLineEdit *idlineEdit;
    QLabel *namelabel;
    QLabel *sexlabel;
    QLabel *birthdaylabel;
    QLabel *bodylabel;

    void setupUi(QWidget *findWidget)
    {
        if (findWidget->objectName().isEmpty())
            findWidget->setObjectName(QStringLiteral("findWidget"));
        findWidget->resize(784, 396);
        returnButton = new QPushButton(findWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(550, 260, 93, 28));
        findButton = new QPushButton(findWidget);
        findButton->setObjectName(QStringLiteral("findButton"));
        findButton->setGeometry(QRect(550, 140, 93, 28));
        label = new QLabel(findWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 80, 72, 15));
        label_2 = new QLabel(findWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 120, 72, 15));
        label_3 = new QLabel(findWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 160, 72, 15));
        label_4 = new QLabel(findWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 200, 72, 15));
        label_5 = new QLabel(findWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 240, 72, 15));
        label_6 = new QLabel(findWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 280, 72, 15));
        classidlineEdit = new QLineEdit(findWidget);
        classidlineEdit->setObjectName(QStringLiteral("classidlineEdit"));
        classidlineEdit->setGeometry(QRect(290, 70, 113, 21));
        idlineEdit = new QLineEdit(findWidget);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(290, 110, 113, 21));
        namelabel = new QLabel(findWidget);
        namelabel->setObjectName(QStringLiteral("namelabel"));
        namelabel->setGeometry(QRect(290, 160, 72, 15));
        sexlabel = new QLabel(findWidget);
        sexlabel->setObjectName(QStringLiteral("sexlabel"));
        sexlabel->setGeometry(QRect(290, 200, 72, 15));
        birthdaylabel = new QLabel(findWidget);
        birthdaylabel->setObjectName(QStringLiteral("birthdaylabel"));
        birthdaylabel->setGeometry(QRect(290, 240, 72, 15));
        bodylabel = new QLabel(findWidget);
        bodylabel->setObjectName(QStringLiteral("bodylabel"));
        bodylabel->setGeometry(QRect(290, 280, 72, 15));

        retranslateUi(findWidget);

        QMetaObject::connectSlotsByName(findWidget);
    } // setupUi

    void retranslateUi(QWidget *findWidget)
    {
        findWidget->setWindowTitle(QApplication::translate("findWidget", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("findWidget", "\350\277\224\345\233\236", Q_NULLPTR));
        findButton->setText(QApplication::translate("findWidget", "\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("findWidget", "\347\217\255\347\272\247", Q_NULLPTR));
        label_2->setText(QApplication::translate("findWidget", "\345\255\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("findWidget", "\345\247\223\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("findWidget", "\346\200\247\345\210\253", Q_NULLPTR));
        label_5->setText(QApplication::translate("findWidget", "\345\207\272\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        label_6->setText(QApplication::translate("findWidget", "\350\272\253\344\275\223\347\212\266\345\206\265", Q_NULLPTR));
        namelabel->setText(QApplication::translate("findWidget", "NULL", Q_NULLPTR));
        sexlabel->setText(QApplication::translate("findWidget", "NULL", Q_NULLPTR));
        birthdaylabel->setText(QApplication::translate("findWidget", "NULL", Q_NULLPTR));
        bodylabel->setText(QApplication::translate("findWidget", "NULL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class findWidget: public Ui_findWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDWIDGET_H
