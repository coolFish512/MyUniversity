/********************************************************************************
** Form generated from reading UI file 'showmessageform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMESSAGEFORM_H
#define UI_SHOWMESSAGEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowMessageForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *ShowMessageForm)
    {
        if (ShowMessageForm->objectName().isEmpty())
            ShowMessageForm->setObjectName(QString::fromUtf8("ShowMessageForm"));
        ShowMessageForm->resize(597, 691);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ShowMessageForm->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/reward.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowMessageForm->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ShowMessageForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(ShowMessageForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        textBrowser = new QTextBrowser(ShowMessageForm);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(13);
        textBrowser->setFont(font1);
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(ShowMessageForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/button/icons/iSee.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShowMessageForm);
        QObject::connect(pushButton, SIGNAL(clicked()), ShowMessageForm, SLOT(close()));

        QMetaObject::connectSlotsByName(ShowMessageForm);
    } // setupUi

    void retranslateUi(QWidget *ShowMessageForm)
    {
        ShowMessageForm->setWindowTitle(QCoreApplication::translate("ShowMessageForm", "\345\245\226\345\212\261\350\256\260\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("ShowMessageForm", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("ShowMessageForm", "\346\210\221\347\237\245\351\201\223\345\225\246\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowMessageForm: public Ui_ShowMessageForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMESSAGEFORM_H
