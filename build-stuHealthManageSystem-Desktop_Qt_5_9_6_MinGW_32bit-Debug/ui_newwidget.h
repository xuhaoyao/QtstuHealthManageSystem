/********************************************************************************
** Form generated from reading UI file 'newwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWIDGET_H
#define UI_NEWWIDGET_H

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

class Ui_newWidget
{
public:
    QPushButton *returnButton;
    QPushButton *addButton;
    QLabel *classidLabel;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLabel *sexLabel;
    QLabel *birthdayLabel;
    QLabel *healthLabel;
    QLineEdit *classidLineEdit;
    QLineEdit *idLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *sexLineEdit;
    QLineEdit *birthdayLineEdit;
    QLineEdit *healthLineEdit;

    void setupUi(QWidget *newWidget)
    {
        if (newWidget->objectName().isEmpty())
            newWidget->setObjectName(QStringLiteral("newWidget"));
        newWidget->resize(761, 331);
        returnButton = new QPushButton(newWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(490, 150, 93, 28));
        addButton = new QPushButton(newWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(490, 100, 93, 28));
        classidLabel = new QLabel(newWidget);
        classidLabel->setObjectName(QStringLiteral("classidLabel"));
        classidLabel->setGeometry(QRect(200, 40, 72, 15));
        idLabel = new QLabel(newWidget);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(200, 80, 72, 15));
        nameLabel = new QLabel(newWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(200, 120, 72, 15));
        sexLabel = new QLabel(newWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));
        sexLabel->setGeometry(QRect(200, 160, 72, 15));
        birthdayLabel = new QLabel(newWidget);
        birthdayLabel->setObjectName(QStringLiteral("birthdayLabel"));
        birthdayLabel->setGeometry(QRect(200, 200, 72, 15));
        healthLabel = new QLabel(newWidget);
        healthLabel->setObjectName(QStringLiteral("healthLabel"));
        healthLabel->setGeometry(QRect(200, 240, 72, 15));
        classidLineEdit = new QLineEdit(newWidget);
        classidLineEdit->setObjectName(QStringLiteral("classidLineEdit"));
        classidLineEdit->setGeometry(QRect(300, 40, 113, 21));
        idLineEdit = new QLineEdit(newWidget);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));
        idLineEdit->setGeometry(QRect(300, 80, 113, 21));
        nameLineEdit = new QLineEdit(newWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(300, 120, 113, 21));
        sexLineEdit = new QLineEdit(newWidget);
        sexLineEdit->setObjectName(QStringLiteral("sexLineEdit"));
        sexLineEdit->setGeometry(QRect(300, 160, 113, 21));
        birthdayLineEdit = new QLineEdit(newWidget);
        birthdayLineEdit->setObjectName(QStringLiteral("birthdayLineEdit"));
        birthdayLineEdit->setGeometry(QRect(300, 200, 113, 21));
        healthLineEdit = new QLineEdit(newWidget);
        healthLineEdit->setObjectName(QStringLiteral("healthLineEdit"));
        healthLineEdit->setGeometry(QRect(300, 240, 113, 21));

        retranslateUi(newWidget);

        QMetaObject::connectSlotsByName(newWidget);
    } // setupUi

    void retranslateUi(QWidget *newWidget)
    {
        newWidget->setWindowTitle(QApplication::translate("newWidget", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("newWidget", "\350\277\224\345\233\236", Q_NULLPTR));
        addButton->setText(QApplication::translate("newWidget", "\346\267\273\345\212\240", Q_NULLPTR));
        classidLabel->setText(QApplication::translate("newWidget", "\347\217\255\347\272\247", Q_NULLPTR));
        idLabel->setText(QApplication::translate("newWidget", "\345\255\246\345\217\267", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("newWidget", "\345\247\223\345\220\215", Q_NULLPTR));
        sexLabel->setText(QApplication::translate("newWidget", "\346\200\247\345\210\253", Q_NULLPTR));
        birthdayLabel->setText(QApplication::translate("newWidget", "\345\207\272\347\224\237\345\271\264\346\234\210", Q_NULLPTR));
        healthLabel->setText(QApplication::translate("newWidget", "\350\272\253\344\275\223\347\212\266\345\206\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class newWidget: public Ui_newWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWIDGET_H
