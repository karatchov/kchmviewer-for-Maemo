/********************************************************************************
** Form generated from reading ui file 'tab_bookmarks.ui'
**
** Created: Sat 1. Aug 04:25:10 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TAB_BOOKMARKS_H
#define UI_TAB_BOOKMARKS_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabBookmarks
{
public:
    QVBoxLayout *vboxLayout;
    QListWidget *list;
    QHBoxLayout *hboxLayout;
    QPushButton *btnAdd;
    QPushButton *btnEdit;
    QPushButton *btnDel;

    void setupUi(QWidget *TabBookmarks)
    {
        if (TabBookmarks->objectName().isEmpty())
            TabBookmarks->setObjectName(QString::fromUtf8("TabBookmarks"));
        TabBookmarks->resize(257, 296);
        vboxLayout = new QVBoxLayout(TabBookmarks);
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        list = new QListWidget(TabBookmarks);
        list->setObjectName(QString::fromUtf8("list"));

        vboxLayout->addWidget(list);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnAdd = new QPushButton(TabBookmarks);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        hboxLayout->addWidget(btnAdd);

        btnEdit = new QPushButton(TabBookmarks);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

        hboxLayout->addWidget(btnEdit);

        btnDel = new QPushButton(TabBookmarks);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));

        hboxLayout->addWidget(btnDel);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(TabBookmarks);

        QMetaObject::connectSlotsByName(TabBookmarks);
    } // setupUi

    void retranslateUi(QWidget *TabBookmarks)
    {
        TabBookmarks->setWindowTitle(QString());
        btnAdd->setText(QApplication::translate("TabBookmarks", "&Add", 0, QApplication::UnicodeUTF8));
        btnEdit->setText(QApplication::translate("TabBookmarks", "Edi&t", 0, QApplication::UnicodeUTF8));
        btnDel->setText(QApplication::translate("TabBookmarks", "&Del", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabBookmarks);
    } // retranslateUi

};

namespace Ui {
    class TabBookmarks: public Ui_TabBookmarks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_BOOKMARKS_H
