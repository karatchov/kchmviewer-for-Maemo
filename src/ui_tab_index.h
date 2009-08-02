/********************************************************************************
** Form generated from reading ui file 'tab_index.ui'
**
** Created: Sat 1. Aug 04:25:10 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TAB_INDEX_H
#define UI_TAB_INDEX_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabIndex
{
public:
    QVBoxLayout *vboxLayout;
    QLineEdit *text;
    QTreeWidget *tree;

    void setupUi(QWidget *TabIndex)
    {
        if (TabIndex->objectName().isEmpty())
            TabIndex->setObjectName(QString::fromUtf8("TabIndex"));
        TabIndex->resize(173, 382);
        vboxLayout = new QVBoxLayout(TabIndex);
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        text = new QLineEdit(TabIndex);
        text->setObjectName(QString::fromUtf8("text"));

        vboxLayout->addWidget(text);

        tree = new QTreeWidget(TabIndex);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setIndentation(10);
        tree->setRootIsDecorated(false);
        tree->setAllColumnsShowFocus(true);
        tree->setColumnCount(1);

        vboxLayout->addWidget(tree);


        retranslateUi(TabIndex);

        QMetaObject::connectSlotsByName(TabIndex);
    } // setupUi

    void retranslateUi(QWidget *TabIndex)
    {
        TabIndex->setWindowTitle(QApplication::translate("TabIndex", "Form1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("TabIndex", "1", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabIndex);
    } // retranslateUi

};

namespace Ui {
    class TabIndex: public Ui_TabIndex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_INDEX_H
