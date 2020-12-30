/********************************************************************************
** Form generated from reading UI file 'correctcontract.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORRECTCONTRACT_H
#define UI_CORRECTCONTRACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_correctcontract
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *correctcontract)
    {
        if (correctcontract->objectName().isEmpty())
            correctcontract->setObjectName(QStringLiteral("correctcontract"));
        correctcontract->resize(400, 300);
        pushButton = new QPushButton(correctcontract);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 210, 88, 27));
        horizontalLayoutWidget = new QWidget(correctcontract);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 120, 271, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(correctcontract);

        QMetaObject::connectSlotsByName(correctcontract);
    } // setupUi

    void retranslateUi(QDialog *correctcontract)
    {
        correctcontract->setWindowTitle(QApplication::translate("correctcontract", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("correctcontract", "OK", nullptr));
        label->setText(QApplication::translate("correctcontract", "Contract number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class correctcontract: public Ui_correctcontract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORRECTCONTRACT_H
