/********************************************************************************
** Form generated from reading UI file 'insertwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTWIDGET_H
#define UI_INSERTWIDGET_H

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

class Ui_insertWidget
{
public:
    QPushButton *returnButton;
    QPushButton *insertButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *classidlineEdit;
    QLineEdit *idlineEdit;
    QLineEdit *namelineEdit;
    QLineEdit *sexlineEdit;
    QLineEdit *birthdaylineEdit;
    QLineEdit *bodylineEdit;

    void setupUi(QWidget *insertWidget)
    {
        if (insertWidget->objectName().isEmpty())
            insertWidget->setObjectName(QStringLiteral("insertWidget"));
        insertWidget->resize(786, 400);
        returnButton = new QPushButton(insertWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(530, 220, 93, 28));
        insertButton = new QPushButton(insertWidget);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setGeometry(QRect(530, 150, 93, 28));
        label = new QLabel(insertWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 90, 72, 15));
        label_2 = new QLabel(insertWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 130, 72, 15));
        label_3 = new QLabel(insertWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 170, 72, 15));
        label_4 = new QLabel(insertWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 210, 72, 15));
        label_5 = new QLabel(insertWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 250, 72, 15));
        label_6 = new QLabel(insertWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 290, 72, 15));
        classidlineEdit = new QLineEdit(insertWidget);
        classidlineEdit->setObjectName(QStringLiteral("classidlineEdit"));
        classidlineEdit->setGeometry(QRect(310, 90, 113, 21));
        idlineEdit = new QLineEdit(insertWidget);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(310, 130, 113, 21));
        namelineEdit = new QLineEdit(insertWidget);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));
        namelineEdit->setGeometry(QRect(310, 170, 113, 21));
        sexlineEdit = new QLineEdit(insertWidget);
        sexlineEdit->setObjectName(QStringLiteral("sexlineEdit"));
        sexlineEdit->setGeometry(QRect(310, 210, 113, 21));
        birthdaylineEdit = new QLineEdit(insertWidget);
        birthdaylineEdit->setObjectName(QStringLiteral("birthdaylineEdit"));
        birthdaylineEdit->setGeometry(QRect(310, 250, 113, 21));
        bodylineEdit = new QLineEdit(insertWidget);
        bodylineEdit->setObjectName(QStringLiteral("bodylineEdit"));
        bodylineEdit->setGeometry(QRect(310, 290, 113, 21));

        retranslateUi(insertWidget);

        QMetaObject::connectSlotsByName(insertWidget);
    } // setupUi

    void retranslateUi(QWidget *insertWidget)
    {
        insertWidget->setWindowTitle(QApplication::translate("insertWidget", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("insertWidget", "\350\277\224\345\233\236", Q_NULLPTR));
        insertButton->setText(QApplication::translate("insertWidget", "\346\217\222\345\205\245", Q_NULLPTR));
        label->setText(QApplication::translate("insertWidget", "\347\217\255\347\272\247", Q_NULLPTR));
        label_2->setText(QApplication::translate("insertWidget", "\345\255\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("insertWidget", "\345\247\223\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("insertWidget", "\346\200\247\345\210\253", Q_NULLPTR));
        label_5->setText(QApplication::translate("insertWidget", "\345\207\272\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        label_6->setText(QApplication::translate("insertWidget", "\350\272\253\344\275\223\347\212\266\345\206\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class insertWidget: public Ui_insertWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTWIDGET_H
