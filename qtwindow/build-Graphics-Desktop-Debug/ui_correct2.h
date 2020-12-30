/********************************************************************************
** Form generated from reading UI file 'correct2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORRECT2_H
#define UI_CORRECT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_correct2
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *correct2)
    {
        if (correct2->objectName().isEmpty())
            correct2->setObjectName(QStringLiteral("correct2"));
        correct2->resize(400, 300);
        pushButton = new QPushButton(correct2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 210, 88, 27));
        horizontalLayoutWidget = new QWidget(correct2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 120, 261, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        retranslateUi(correct2);

        QMetaObject::connectSlotsByName(correct2);
    } // setupUi

    void retranslateUi(QDialog *correct2)
    {
        correct2->setWindowTitle(QApplication::translate("correct2", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("correct2", "OK", nullptr));
        label->setText(QApplication::translate("correct2", "Type", nullptr));
        comboBox->setItemText(0, QApplication::translate("correct2", "Budget", nullptr));
        comboBox->setItemText(1, QApplication::translate("correct2", "Contract", nullptr));

    } // retranslateUi

};

namespace Ui {
    class correct2: public Ui_correct2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORRECT2_H
