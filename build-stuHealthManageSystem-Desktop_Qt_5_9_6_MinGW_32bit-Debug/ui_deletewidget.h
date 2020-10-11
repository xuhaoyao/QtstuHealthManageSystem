/********************************************************************************
** Form generated from reading UI file 'deletewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWIDGET_H
#define UI_DELETEWIDGET_H

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

class Ui_deleteWidget
{
public:
    QPushButton *returnButton;
    QPushButton *deleteButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *classidlineEdit;
    QLineEdit *idlineEdit;
    QLineEdit *namelineEdit;

    void setupUi(QWidget *deleteWidget)
    {
        if (deleteWidget->objectName().isEmpty())
            deleteWidget->setObjectName(QStringLiteral("deleteWidget"));
        deleteWidget->resize(790, 399);
        returnButton = new QPushButton(deleteWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(500, 200, 93, 28));
        deleteButton = new QPushButton(deleteWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(500, 140, 93, 28));
        label = new QLabel(deleteWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 110, 72, 15));
        label_2 = new QLabel(deleteWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 170, 72, 15));
        label_3 = new QLabel(deleteWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 240, 72, 15));
        classidlineEdit = new QLineEdit(deleteWidget);
        classidlineEdit->setObjectName(QStringLiteral("classidlineEdit"));
        classidlineEdit->setGeometry(QRect(300, 110, 113, 21));
        idlineEdit = new QLineEdit(deleteWidget);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(300, 170, 113, 21));
        namelineEdit = new QLineEdit(deleteWidget);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));
        namelineEdit->setGeometry(QRect(300, 240, 113, 21));

        retranslateUi(deleteWidget);

        QMetaObject::connectSlotsByName(deleteWidget);
    } // setupUi

    void retranslateUi(QWidget *deleteWidget)
    {
        deleteWidget->setWindowTitle(QApplication::translate("deleteWidget", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("deleteWidget", "\350\277\224\345\233\236", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("deleteWidget", "\345\210\240\351\231\244", Q_NULLPTR));
        label->setText(QApplication::translate("deleteWidget", "\347\217\255\347\272\247", Q_NULLPTR));
        label_2->setText(QApplication::translate("deleteWidget", "\345\255\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("deleteWidget", "\345\247\223\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deleteWidget: public Ui_deleteWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWIDGET_H
