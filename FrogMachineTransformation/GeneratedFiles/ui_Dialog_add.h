/********************************************************************************
** Form generated from reading UI file 'Dialog_add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADD_H
#define UI_DIALOG_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dialog_add
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_L1;
    QSpacerItem *verticalSpacer_2;
    QDoubleSpinBox *dSB_L2;
    QLabel *label_L3;
    QDoubleSpinBox *dSB_L1;
    QLabel *label_L4;
    QDoubleSpinBox *dSB_L4;
    QDoubleSpinBox *dSB_L3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_L2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *Dialog_add)
    {
        if (Dialog_add->objectName().isEmpty())
            Dialog_add->setObjectName(QString::fromUtf8("Dialog_add"));
        Dialog_add->resize(330, 330);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        Dialog_add->setFont(font);
        gridLayout_3 = new QGridLayout(Dialog_add);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        btn_ok = new QPushButton(Dialog_add);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        gridLayout_2->addWidget(btn_ok, 0, 1, 1, 1);

        btn_cancel = new QPushButton(Dialog_add);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));

        gridLayout_2->addWidget(btn_cancel, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        label_L1 = new QLabel(Dialog_add);
        label_L1->setObjectName(QString::fromUtf8("label_L1"));

        gridLayout->addWidget(label_L1, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        dSB_L2 = new QDoubleSpinBox(Dialog_add);
        dSB_L2->setObjectName(QString::fromUtf8("dSB_L2"));
        dSB_L2->setDecimals(3);
        dSB_L2->setMinimum(-9999.998999999999796);
        dSB_L2->setMaximum(9999.998999999999796);

        gridLayout->addWidget(dSB_L2, 5, 1, 1, 1);

        label_L3 = new QLabel(Dialog_add);
        label_L3->setObjectName(QString::fromUtf8("label_L3"));

        gridLayout->addWidget(label_L3, 7, 0, 1, 1);

        dSB_L1 = new QDoubleSpinBox(Dialog_add);
        dSB_L1->setObjectName(QString::fromUtf8("dSB_L1"));
        dSB_L1->setDecimals(3);
        dSB_L1->setMinimum(-9999.998999999999796);
        dSB_L1->setMaximum(9999.998999999999796);

        gridLayout->addWidget(dSB_L1, 3, 1, 1, 1);

        label_L4 = new QLabel(Dialog_add);
        label_L4->setObjectName(QString::fromUtf8("label_L4"));

        gridLayout->addWidget(label_L4, 9, 0, 1, 1);

        dSB_L4 = new QDoubleSpinBox(Dialog_add);
        dSB_L4->setObjectName(QString::fromUtf8("dSB_L4"));
        dSB_L4->setDecimals(3);
        dSB_L4->setMinimum(-9999.998999999999796);
        dSB_L4->setMaximum(9999.998999999999796);

        gridLayout->addWidget(dSB_L4, 9, 1, 1, 1);

        dSB_L3 = new QDoubleSpinBox(Dialog_add);
        dSB_L3->setObjectName(QString::fromUtf8("dSB_L3"));
        dSB_L3->setDecimals(3);
        dSB_L3->setMinimum(-9999.998999999999796);
        dSB_L3->setMaximum(9999.998999999999796);

        gridLayout->addWidget(dSB_L3, 7, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 8, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 1, 1, 1);

        label_L2 = new QLabel(Dialog_add);
        label_L2->setObjectName(QString::fromUtf8("label_L2"));

        gridLayout->addWidget(label_L2, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 1, 1, 1);

        label_name = new QLabel(Dialog_add);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        gridLayout->addWidget(label_name, 1, 0, 1, 1);

        lineEdit_name = new QLineEdit(Dialog_add);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        gridLayout->addWidget(lineEdit_name, 1, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 10, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_L1->setBuddy(dSB_L1);
        label_L3->setBuddy(dSB_L3);
        label_L4->setBuddy(dSB_L4);
        label_L2->setBuddy(dSB_L2);
        label_name->setBuddy(lineEdit_name);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_name, dSB_L1);
        QWidget::setTabOrder(dSB_L1, dSB_L2);
        QWidget::setTabOrder(dSB_L2, dSB_L3);
        QWidget::setTabOrder(dSB_L3, dSB_L4);
        QWidget::setTabOrder(dSB_L4, btn_ok);
        QWidget::setTabOrder(btn_ok, btn_cancel);

        retranslateUi(Dialog_add);
        QObject::connect(btn_ok, SIGNAL(clicked()), Dialog_add, SLOT(accept()));
        QObject::connect(btn_cancel, SIGNAL(clicked()), Dialog_add, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_add);
    } // setupUi

    void retranslateUi(QDialog *Dialog_add)
    {
        Dialog_add->setWindowTitle(QApplication::translate("Dialog_add", "\346\267\273\345\212\240\351\241\271", nullptr));
        btn_ok->setText(QApplication::translate("Dialog_add", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QApplication::translate("Dialog_add", "\345\217\226\346\266\210", nullptr));
#ifndef QT_NO_TOOLTIP
        label_L1->setToolTip(QApplication::translate("Dialog_add", "\346\234\272\345\272\212\345\275\222\351\233\266\345\220\216\357\274\214\344\270\273\350\275\264\346\227\213\350\275\254\350\275\264\347\272\277\345\210\260C\350\275\264\347\232\204X\346\226\271\345\220\221\350\267\235\347\246\273", nullptr));
#endif // QT_NO_TOOLTIP
        label_L1->setText(QApplication::translate("Dialog_add", "L1", nullptr));
#ifndef QT_NO_TOOLTIP
        label_L3->setToolTip(QApplication::translate("Dialog_add", "\346\234\272\345\272\212\345\275\222\351\233\266\345\220\216\357\274\214\344\270\273\350\275\264\347\253\257\351\235\242\345\210\260A\350\275\264\347\232\204Z\346\226\271\345\220\221\350\267\235\347\246\273", nullptr));
#endif // QT_NO_TOOLTIP
        label_L3->setText(QApplication::translate("Dialog_add", "L3", nullptr));
#ifndef QT_NO_TOOLTIP
        label_L4->setToolTip(QApplication::translate("Dialog_add", "\346\234\272\345\272\212\345\275\222\351\233\266\345\220\216\357\274\214\344\270\273\350\275\264\350\275\264\347\272\277\345\210\260A\350\275\264\347\232\204Y\346\226\271\345\220\221\350\267\235\347\246\273\343\200\202\346\255\243\345\257\271\346\234\272\345\272\212\357\274\214\344\270\273\350\275\264\350\275\264\347\272\277\345\234\250A\350\275\264\345\267\246\344\276\247\345\200\274\344\270\272\346\255\243\357\274\214\345\217\263\344\276\247\345\200\274\344\270\272\350\264\237\357\274\214\347\220\206\346\203\263\346\203\205\345\206\265\344\270\213\346\255\244\345\200\274\344\270\2720", nullptr));
#endif // QT_NO_TOOLTIP
        label_L4->setText(QApplication::translate("Dialog_add", "L4", nullptr));
#ifndef QT_NO_TOOLTIP
        label_L2->setToolTip(QApplication::translate("Dialog_add", "\346\234\272\345\272\212\345\275\222\351\233\266\345\220\216\357\274\214A\350\275\264\345\210\260C\350\275\264\347\232\204Y\346\226\271\345\220\221\350\267\235\347\246\273\343\200\202\346\255\243\345\257\271\346\234\272\345\272\212\357\274\214A\350\275\264\345\234\250C\350\275\264\345\267\246\344\276\247\345\200\274\344\270\272\346\255\243\357\274\214\345\217\263\344\276\247\345\200\274\344\270\272\350\264\237\357\274\214\347\220\206\346\203\263\346\203\205\345\206\265\344\270\213\346\255\244\345\200\274\344\270\2720", nullptr));
#endif // QT_NO_TOOLTIP
        label_L2->setText(QApplication::translate("Dialog_add", "L2", nullptr));
        label_name->setText(QApplication::translate("Dialog_add", "\345\220\215\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_add: public Ui_Dialog_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADD_H
