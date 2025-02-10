/********************************************************************************
** Form generated from reading UI file 'checkenglishform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKENGLISHFORM_H
#define UI_CHECKENGLISHFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckEnglishForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *radioButton;
    QSpacerItem *verticalSpacer;
    QRadioButton *radioButton_2;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *radioButton_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *CheckEnglishForm)
    {
        if (CheckEnglishForm->objectName().isEmpty())
            CheckEnglishForm->setObjectName(QString::fromUtf8("CheckEnglishForm"));
        CheckEnglishForm->resize(516, 449);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/fanyi2.png"), QSize(), QIcon::Normal, QIcon::Off);
        CheckEnglishForm->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(CheckEnglishForm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        progressBar = new QProgressBar(CheckEnglishForm);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_3->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CheckEnglishForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(37);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox = new QGroupBox(CheckEnglishForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font1;
        font1.setPointSize(10);
        groupBox->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        radioButton->setFont(font2);

        verticalLayout->addWidget(radioButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font2);

        verticalLayout->addWidget(radioButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font2);

        verticalLayout->addWidget(radioButton_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);


        retranslateUi(CheckEnglishForm);

        QMetaObject::connectSlotsByName(CheckEnglishForm);
    } // setupUi

    void retranslateUi(QWidget *CheckEnglishForm)
    {
        CheckEnglishForm->setWindowTitle(QCoreApplication::translate("CheckEnglishForm", "\347\273\203\344\271\240\347\277\273\350\257\221ing", nullptr));
        label->setText(QCoreApplication::translate("CheckEnglishForm", "word", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CheckEnglishForm", "\351\200\211\345\207\272\346\255\243\347\241\256\347\232\204\347\277\273\350\257\221", nullptr));
        radioButton->setText(QCoreApplication::translate("CheckEnglishForm", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("CheckEnglishForm", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("CheckEnglishForm", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckEnglishForm: public Ui_CheckEnglishForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKENGLISHFORM_H
