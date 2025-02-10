/********************************************************************************
** Form generated from reading UI file 'checkchineseform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKCHINESEFORM_H
#define UI_CHECKCHINESEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checkChineseForm
{
public:
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QWidget *checkChineseForm)
    {
        if (checkChineseForm->objectName().isEmpty())
            checkChineseForm->setObjectName(QString::fromUtf8("checkChineseForm"));
        checkChineseForm->resize(430, 170);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/moxie2.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkChineseForm->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(checkChineseForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        progressBar = new QProgressBar(checkChineseForm);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(checkChineseForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(checkChineseForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        groupBox->setFont(font1);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font2.setPointSize(11);
        lineEdit->setFont(font2);

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        commandLinkButton = new QCommandLinkButton(checkChineseForm);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(9);
        commandLinkButton->setFont(font3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/button/icons/windowIcon/nextChinese.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        horizontalLayout_2->addWidget(commandLinkButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(checkChineseForm);

        QMetaObject::connectSlotsByName(checkChineseForm);
    } // setupUi

    void retranslateUi(QWidget *checkChineseForm)
    {
        checkChineseForm->setWindowTitle(QCoreApplication::translate("checkChineseForm", "\347\273\203\344\271\240\351\273\230\345\206\231ing", nullptr));
        label->setText(QCoreApplication::translate("checkChineseForm", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("checkChineseForm", "\345\234\250\344\270\213\346\226\271\351\273\230\345\206\231", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("checkChineseForm", "\344\270\213\344\270\200\344\270\252\345\220\247\357\274\214\346\210\221\344\270\215\344\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkChineseForm: public Ui_checkChineseForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKCHINESEFORM_H
