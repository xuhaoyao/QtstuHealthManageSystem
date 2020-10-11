/********************************************************************************
** Form generated from reading UI file 'menuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGET_H
#define UI_MENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuWidget
{
public:
    QPushButton *newButton;
    QPushButton *insertButton;
    QPushButton *printButton;
    QPushButton *deleteButton;
    QPushButton *loadButton;
    QPushButton *exitButton;
    QPushButton *saveButton;
    QPushButton *findButton;

    void setupUi(QWidget *menuWidget)
    {
        if (menuWidget->objectName().isEmpty())
            menuWidget->setObjectName(QStringLiteral("menuWidget"));
        menuWidget->resize(761, 332);
        newButton = new QPushButton(menuWidget);
        newButton->setObjectName(QStringLiteral("newButton"));
        newButton->setGeometry(QRect(310, 110, 114, 28));
        insertButton = new QPushButton(menuWidget);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setGeometry(QRect(90, 80, 111, 31));
        printButton = new QPushButton(menuWidget);
        printButton->setObjectName(QStringLiteral("printButton"));
        printButton->setGeometry(QRect(310, 150, 111, 31));
        deleteButton = new QPushButton(menuWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(520, 80, 111, 31));
        loadButton = new QPushButton(menuWidget);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(90, 190, 111, 31));
        exitButton = new QPushButton(menuWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(530, 270, 93, 28));
        saveButton = new QPushButton(menuWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(520, 190, 111, 31));
        findButton = new QPushButton(menuWidget);
        findButton->setObjectName(QStringLiteral("findButton"));
        findButton->setGeometry(QRect(100, 270, 93, 28));

        retranslateUi(menuWidget);

        QMetaObject::connectSlotsByName(menuWidget);
    } // setupUi

    void retranslateUi(QWidget *menuWidget)
    {
        menuWidget->setWindowTitle(QApplication::translate("menuWidget", "menuWidget", Q_NULLPTR));
        newButton->setText(QApplication::translate("menuWidget", "\346\226\260\345\273\272\345\255\246\347\224\237\345\201\245\345\272\267\350\241\250", Q_NULLPTR));
        insertButton->setText(QApplication::translate("menuWidget", "\346\217\222\345\205\245\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        printButton->setText(QApplication::translate("menuWidget", "\350\276\223\345\207\272\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("menuWidget", "\345\210\240\351\231\244\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        loadButton->setText(QApplication::translate("menuWidget", "\350\257\273\345\217\226\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        exitButton->setText(QApplication::translate("menuWidget", "\351\200\200\345\207\272", Q_NULLPTR));
        saveButton->setText(QApplication::translate("menuWidget", "\344\277\235\345\255\230\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        findButton->setText(QApplication::translate("menuWidget", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class menuWidget: public Ui_menuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGET_H
