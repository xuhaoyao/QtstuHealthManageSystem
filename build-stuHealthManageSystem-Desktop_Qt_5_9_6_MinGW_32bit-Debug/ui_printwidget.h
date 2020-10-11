/********************************************************************************
** Form generated from reading UI file 'printwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTWIDGET_H
#define UI_PRINTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_printWidget
{
public:
    QPushButton *returnButton;
    QTableWidget *tableWidget;
    QPushButton *showButton;

    void setupUi(QWidget *printWidget)
    {
        if (printWidget->objectName().isEmpty())
            printWidget->setObjectName(QStringLiteral("printWidget"));
        printWidget->resize(788, 400);
        returnButton = new QPushButton(printWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(470, 350, 93, 28));
        tableWidget = new QTableWidget(printWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 761, 331));
        showButton = new QPushButton(printWidget);
        showButton->setObjectName(QStringLiteral("showButton"));
        showButton->setGeometry(QRect(210, 350, 93, 28));

        retranslateUi(printWidget);

        QMetaObject::connectSlotsByName(printWidget);
    } // setupUi

    void retranslateUi(QWidget *printWidget)
    {
        printWidget->setWindowTitle(QApplication::translate("printWidget", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("printWidget", "\350\277\224\345\233\236", Q_NULLPTR));
        showButton->setText(QApplication::translate("printWidget", "\346\230\276\347\244\272\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class printWidget: public Ui_printWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTWIDGET_H
