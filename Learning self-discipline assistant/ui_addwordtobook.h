/********************************************************************************
** Form generated from reading UI file 'addwordtobook.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORDTOBOOK_H
#define UI_ADDWORDTOBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addWordToBook
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;

    void setupUi(QWidget *addWordToBook)
    {
        if (addWordToBook->objectName().isEmpty())
            addWordToBook->setObjectName(QString::fromUtf8("addWordToBook"));
        addWordToBook->resize(400, 300);
        groupBox = new QGroupBox(addWordToBook);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 50, 109, 55));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        groupBox_2 = new QGroupBox(addWordToBook);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 120, 181, 111));
        groupBox_2->setFont(font);

        retranslateUi(addWordToBook);

        QMetaObject::connectSlotsByName(addWordToBook);
    } // setupUi

    void retranslateUi(QWidget *addWordToBook)
    {
        addWordToBook->setWindowTitle(QCoreApplication::translate("addWordToBook", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addWordToBook", "\345\206\231\344\270\213\346\226\260\345\215\225\350\257\215\347\232\204\350\213\261\346\226\207", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("addWordToBook", "\345\206\231\344\270\213\346\226\260\345\215\225\350\257\215\347\232\204\346\261\211\350\257\255\357\274\210\346\234\200\345\244\232\345\206\2314\347\247\215\344\270\215\345\220\214\347\232\204\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addWordToBook: public Ui_addWordToBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDTOBOOK_H
