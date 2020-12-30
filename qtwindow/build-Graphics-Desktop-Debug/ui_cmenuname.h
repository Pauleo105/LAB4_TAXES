/********************************************************************************
** Form generated from reading UI file 'cmenuname.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMENUNAME_H
#define UI_CMENUNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cmenuname
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *cmenuname)
    {
        if (cmenuname->objectName().isEmpty())
            cmenuname->setObjectName(QStringLiteral("cmenuname"));
        cmenuname->resize(400, 300);
        pushButton = new QPushButton(cmenuname);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 210, 88, 27));
        widget = new QWidget(cmenuname);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 130, 200, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(cmenuname);

        QMetaObject::connectSlotsByName(cmenuname);
    } // setupUi

    void retranslateUi(QDialog *cmenuname)
    {
        cmenuname->setWindowTitle(QApplication::translate("cmenuname", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("cmenuname", "OK", nullptr));
        label->setText(QApplication::translate("cmenuname", "New name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmenuname: public Ui_cmenuname {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMENUNAME_H
