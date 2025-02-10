/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *actionB;
    QAction *action_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QKeySequenceEdit *keySequenceEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(888, 265);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        actionB = new QAction(MainWindow);
        actionB->setObjectName(QString::fromUtf8("actionB"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_3->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_4->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        horizontalLayout_4->addWidget(pushButton_10);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_9->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_6->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_6->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_7->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_7->addWidget(pushButton_8);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        horizontalLayout_5->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        horizontalLayout_5->addWidget(pushButton_12);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_3);


        horizontalLayout_9->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        keySequenceEdit = new QKeySequenceEdit(centralwidget);
        keySequenceEdit->setObjectName(QString::fromUtf8("keySequenceEdit"));

        horizontalLayout->addWidget(keySequenceEdit);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 888, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(actionB);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211", nullptr));
        actionB->setText(QCoreApplication::translate("MainWindow", "B\347\253\231\351\207\221\346\233\262", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\357\274\201", nullptr));
        groupBox->setTitle(QString());
#if QT_CONFIG(whatsthis)
        pushButton->setWhatsThis(QCoreApplication::translate("MainWindow", "W", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_2->setWhatsThis(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_5->setWhatsThis(QCoreApplication::translate("MainWindow", "R", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_6->setWhatsThis(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_9->setWhatsThis(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_10->setWhatsThis(QCoreApplication::translate("MainWindow", "D", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        groupBox_2->setTitle(QString());
#if QT_CONFIG(whatsthis)
        pushButton_3->setWhatsThis(QCoreApplication::translate("MainWindow", "U", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_4->setWhatsThis(QCoreApplication::translate("MainWindow", "I", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_7->setWhatsThis(QCoreApplication::translate("MainWindow", "O", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_8->setWhatsThis(QCoreApplication::translate("MainWindow", "J", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "J", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_11->setWhatsThis(QCoreApplication::translate("MainWindow", "K", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_12->setWhatsThis(QCoreApplication::translate("MainWindow", "L", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\351\242\204\350\256\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
