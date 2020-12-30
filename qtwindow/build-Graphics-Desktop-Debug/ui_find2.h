/********************************************************************************
** Form generated from reading UI file 'find2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND2_H
#define UI_FIND2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_find2
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *find2)
    {
        if (find2->objectName().isEmpty())
            find2->setObjectName(QStringLiteral("find2"));
        find2->resize(175, 123);
        comboBox = new QComboBox(find2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 30, 79, 27));
        pushButton = new QPushButton(find2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 80, 88, 27));

        retranslateUi(find2);

        QMetaObject::connectSlotsByName(find2);
    } // setupUi

    void retranslateUi(QDialog *find2)
    {
        find2->setWindowTitle(QApplication::translate("find2", "Dialog", nullptr));
        comboBox->setItemText(0, QApplication::translate("find2", "Budget", nullptr));
        comboBox->setItemText(1, QApplication::translate("find2", "Contract", nullptr));

        pushButton->setText(QApplication::translate("find2", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class find2: public Ui_find2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND2_H
