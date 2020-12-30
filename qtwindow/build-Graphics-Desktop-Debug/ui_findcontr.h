/********************************************************************************
** Form generated from reading UI file 'findcontr.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCONTR_H
#define UI_FINDCONTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findcontr
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *findcontr)
    {
        if (findcontr->objectName().isEmpty())
            findcontr->setObjectName(QStringLiteral("findcontr"));
        findcontr->resize(400, 300);
        pushButton = new QPushButton(findcontr);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 220, 88, 27));
        horizontalLayoutWidget = new QWidget(findcontr);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 80, 301, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(findcontr);

        QMetaObject::connectSlotsByName(findcontr);
    } // setupUi

    void retranslateUi(QDialog *findcontr)
    {
        findcontr->setWindowTitle(QApplication::translate("findcontr", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("findcontr", "OK", nullptr));
        label->setText(QApplication::translate("findcontr", "Contract number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findcontr: public Ui_findcontr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCONTR_H
