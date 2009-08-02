/********************************************************************************
** Form generated from reading ui file 'dialog_topicselector.ui'
**
** Created: Sat 1. Aug 04:25:11 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOG_TOPICSELECTOR_H
#define UI_DIALOG_TOPICSELECTOR_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogTopicSelector
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QListWidget *list;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogTopicSelector)
    {
        if (DialogTopicSelector->objectName().isEmpty())
            DialogTopicSelector->setObjectName(QString::fromUtf8("DialogTopicSelector"));
        DialogTopicSelector->resize(218, 258);
        vboxLayout = new QVBoxLayout(DialogTopicSelector);
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(DialogTopicSelector);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label);

        list = new QListWidget(DialogTopicSelector);
        list->setObjectName(QString::fromUtf8("list"));

        vboxLayout->addWidget(list);

        buttonBox = new QDialogButtonBox(DialogTopicSelector);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(DialogTopicSelector);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogTopicSelector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogTopicSelector, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogTopicSelector);
    } // setupUi

    void retranslateUi(QDialog *DialogTopicSelector)
    {
        DialogTopicSelector->setWindowTitle(QApplication::translate("DialogTopicSelector", "Multiple topics", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogTopicSelector", "Please select the topic to open:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DialogTopicSelector);
    } // retranslateUi

};

namespace Ui {
    class DialogTopicSelector: public Ui_DialogTopicSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TOPICSELECTOR_H
