/********************************************************************************
** Form generated from reading UI file 'check.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_H
#define UI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_check
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *check)
    {
        if (check->objectName().isEmpty())
            check->setObjectName(QStringLiteral("check"));
        check->resize(400, 300);
        pushButton = new QPushButton(check);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 180, 88, 27));
        label = new QLabel(check);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 80, 67, 19));

        retranslateUi(check);

        QMetaObject::connectSlotsByName(check);
    } // setupUi

    void retranslateUi(QDialog *check)
    {
        check->setWindowTitle(QApplication::translate("check", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("check", "PushButton", nullptr));
        label->setText(QApplication::translate("check", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class check: public Ui_check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_H
