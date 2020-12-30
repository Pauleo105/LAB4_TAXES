/********************************************************************************
** Form generated from reading UI file 'correct1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORRECT1_H
#define UI_CORRECT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_correct1
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *correct1)
    {
        if (correct1->objectName().isEmpty())
            correct1->setObjectName(QStringLiteral("correct1"));
        correct1->resize(400, 300);
        pushButton = new QPushButton(correct1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 230, 88, 27));
        horizontalLayoutWidget = new QWidget(correct1);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 110, 271, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(correct1);

        QMetaObject::connectSlotsByName(correct1);
    } // setupUi

    void retranslateUi(QDialog *correct1)
    {
        correct1->setWindowTitle(QApplication::translate("correct1", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("correct1", "OK", nullptr));
        label->setText(QApplication::translate("correct1", "Private number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class correct1: public Ui_correct1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORRECT1_H
