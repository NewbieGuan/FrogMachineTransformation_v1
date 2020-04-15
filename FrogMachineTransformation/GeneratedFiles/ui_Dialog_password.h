/********************************************************************************
** Form generated from reading UI file 'Dialog_password.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PASSWORD_H
#define UI_DIALOG_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dialog_password
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_password;
    QLabel *label_password;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Dialog_password)
    {
        if (Dialog_password->objectName().isEmpty())
            Dialog_password->setObjectName(QString::fromUtf8("Dialog_password"));
        Dialog_password->resize(330, 130);
        gridLayout = new QGridLayout(Dialog_password);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(Dialog_password);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        btn_ok->setFont(font);

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(Dialog_password);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setFont(font);

        horizontalLayout->addWidget(btn_cancel);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        lineEdit_password = new QLineEdit(Dialog_password);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_password, 1, 1, 1, 1);

        label_password = new QLabel(Dialog_password);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setFont(font);

        gridLayout->addWidget(label_password, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_password->setBuddy(lineEdit_password);
#endif // QT_NO_SHORTCUT

        retranslateUi(Dialog_password);
        QObject::connect(btn_ok, SIGNAL(clicked()), Dialog_password, SLOT(accept()));
        QObject::connect(btn_cancel, SIGNAL(clicked()), Dialog_password, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_password);
    } // setupUi

    void retranslateUi(QDialog *Dialog_password)
    {
        Dialog_password->setWindowTitle(QApplication::translate("Dialog_password", "\345\257\206\347\240\201\350\276\223\345\205\245", nullptr));
        btn_ok->setText(QApplication::translate("Dialog_password", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QApplication::translate("Dialog_password", "\345\217\226\346\266\210", nullptr));
        label_password->setText(QApplication::translate("Dialog_password", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_password: public Ui_Dialog_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PASSWORD_H
