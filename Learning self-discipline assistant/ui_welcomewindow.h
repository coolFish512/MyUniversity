/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcomeWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QWidget *welcomeWindow)
    {
        if (welcomeWindow->objectName().isEmpty())
            welcomeWindow->setObjectName(QString::fromUtf8("welcomeWindow"));
        welcomeWindow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/appIcon/icons/ice.png"), QSize(), QIcon::Normal, QIcon::Off);
        welcomeWindow->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(welcomeWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(welcomeWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font;
        font.setPointSize(11);
        textBrowser->setFont(font);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(welcomeWindow);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));

        horizontalLayout->addWidget(commandLinkButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(welcomeWindow);

        QMetaObject::connectSlotsByName(welcomeWindow);
    } // setupUi

    void retranslateUi(QWidget *welcomeWindow)
    {
        welcomeWindow->setWindowTitle(QCoreApplication::translate("welcomeWindow", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("welcomeWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("welcomeWindow", "\347\273\247\347\273\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomeWindow: public Ui_welcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
