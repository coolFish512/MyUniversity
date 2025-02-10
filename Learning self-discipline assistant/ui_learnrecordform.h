/********************************************************************************
** Form generated from reading UI file 'learnrecordform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNRECORDFORM_H
#define UI_LEARNRECORDFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearnRecordForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCalendarWidget *calendarWidget;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QWidget *LearnRecordForm)
    {
        if (LearnRecordForm->objectName().isEmpty())
            LearnRecordForm->setObjectName(QString::fromUtf8("LearnRecordForm"));
        LearnRecordForm->resize(655, 827);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/windowIcon/icons/windowIcon/learnRecord.png"), QSize(), QIcon::Normal, QIcon::Off);
        LearnRecordForm->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(LearnRecordForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(LearnRecordForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        calendarWidget = new QCalendarWidget(groupBox);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        calendarWidget->setFont(font);

        horizontalLayout->addWidget(calendarWidget);


        verticalLayout->addWidget(groupBox);

        tableWidget = new QTableWidget(LearnRecordForm);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        label = new QLabel(LearnRecordForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout->addWidget(label);


        retranslateUi(LearnRecordForm);

        QMetaObject::connectSlotsByName(LearnRecordForm);
    } // setupUi

    void retranslateUi(QWidget *LearnRecordForm)
    {
        LearnRecordForm->setWindowTitle(QCoreApplication::translate("LearnRecordForm", "\345\255\246\344\271\240\350\256\260\345\275\225", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LearnRecordForm", "\346\227\245\346\234\237", nullptr));
        label->setText(QCoreApplication::translate("LearnRecordForm", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LearnRecordForm: public Ui_LearnRecordForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNRECORDFORM_H
