/********************************************************************************
** Form generated from reading UI file 'setform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETFORM_H
#define UI_SETFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSlider *horizontalSlider;

    void setupUi(QWidget *setForm)
    {
        if (setForm->objectName().isEmpty())
            setForm->setObjectName(QString::fromUtf8("setForm"));
        setForm->resize(403, 152);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        setForm->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/set.png"), QSize(), QIcon::Normal, QIcon::Off);
        setForm->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(setForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(setForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        radioButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/41.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton->setIcon(icon1);

        horizontalLayout_2->addWidget(radioButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/bookIcon/icons/bookIcon/51.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_2->setIcon(icon2);

        horizontalLayout_2->addWidget(radioButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(setForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(setForm);

        QMetaObject::connectSlotsByName(setForm);
    } // setupUi

    void retranslateUi(QWidget *setForm)
    {
        setForm->setWindowTitle(QCoreApplication::translate("setForm", "\350\256\276\347\275\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("setForm", "\346\230\257\345\220\246\351\234\200\350\246\201\345\255\246\344\271\240\345\245\226\345\212\261", nullptr));
        radioButton->setText(QCoreApplication::translate("setForm", "\344\270\215\346\210\221\344\270\215\347\250\200\347\275\225", nullptr));
        radioButton_2->setText(QCoreApplication::translate("setForm", "\346\210\221\350\246\201\346\210\221\350\246\201", nullptr));
        groupBox->setTitle(QCoreApplication::translate("setForm", "\347\250\213\345\272\217\346\200\201\345\272\246", nullptr));
        label->setText(QCoreApplication::translate("setForm", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setForm: public Ui_setForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETFORM_H
