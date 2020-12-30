/********************************************************************************
** Form generated from reading UI file 'deletecontr.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECONTR_H
#define UI_DELETECONTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletecontr
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *deletecontr)
    {
        if (deletecontr->objectName().isEmpty())
            deletecontr->setObjectName(QStringLiteral("deletecontr"));
        deletecontr->resize(400, 300);
        pushButton = new QPushButton(deletecontr);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 210, 88, 27));
        widget = new QWidget(deletecontr);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 130, 261, 29));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        retranslateUi(deletecontr);

        QMetaObject::connectSlotsByName(deletecontr);
    } // setupUi

    void retranslateUi(QDialog *deletecontr)
    {
        deletecontr->setWindowTitle(QApplication::translate("deletecontr", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("deletecontr", "OK", nullptr));
        label->setText(QApplication::translate("deletecontr", "Contract number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletecontr: public Ui_deletecontr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECONTR_H
