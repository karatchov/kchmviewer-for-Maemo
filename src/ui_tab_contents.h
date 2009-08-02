/********************************************************************************
** Form generated from reading ui file 'tab_contents.ui'
**
** Created: Sat 1. Aug 04:25:10 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TAB_CONTENTS_H
#define UI_TAB_CONTENTS_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabContents
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *tree;

    void setupUi(QWidget *TabContents)
    {
        if (TabContents->objectName().isEmpty())
            TabContents->setObjectName(QString::fromUtf8("TabContents"));
        TabContents->resize(257, 424);
        vboxLayout = new QVBoxLayout(TabContents);
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tree = new QTreeWidget(TabContents);
        tree->setObjectName(QString::fromUtf8("tree"));

        vboxLayout->addWidget(tree);


        retranslateUi(TabContents);

        QMetaObject::connectSlotsByName(TabContents);
    } // setupUi

    void retranslateUi(QWidget *TabContents)
    {
        TabContents->setWindowTitle(QApplication::translate("TabContents", "Form1", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabContents);
    } // retranslateUi

};

namespace Ui {
    class TabContents: public Ui_TabContents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_CONTENTS_H
