/********************************************************************************
** Form generated from reading UI file 'whataboutenglishtextform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHATABOUTENGLISHTEXTFORM_H
#define UI_WHATABOUTENGLISHTEXTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WhatAboutEnglishTextForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *WhatAboutEnglishTextForm)
    {
        if (WhatAboutEnglishTextForm->objectName().isEmpty())
            WhatAboutEnglishTextForm->setObjectName(QString::fromUtf8("WhatAboutEnglishTextForm"));
        WhatAboutEnglishTextForm->resize(577, 371);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/ans.png"), QSize(), QIcon::Normal, QIcon::Off);
        WhatAboutEnglishTextForm->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(WhatAboutEnglishTextForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(WhatAboutEnglishTextForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox = new QGroupBox(WhatAboutEnglishTextForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(WhatAboutEnglishTextForm);

        QMetaObject::connectSlotsByName(WhatAboutEnglishTextForm);
    } // setupUi

    void retranslateUi(QWidget *WhatAboutEnglishTextForm)
    {
        WhatAboutEnglishTextForm->setWindowTitle(QCoreApplication::translate("WhatAboutEnglishTextForm", "\347\273\203\344\271\240\345\217\215\351\246\210", nullptr));
        label->setText(QCoreApplication::translate("WhatAboutEnglishTextForm", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WhatAboutEnglishTextForm", "\345\207\272\351\224\231\345\233\236\351\241\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WhatAboutEnglishTextForm: public Ui_WhatAboutEnglishTextForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHATABOUTENGLISHTEXTFORM_H
