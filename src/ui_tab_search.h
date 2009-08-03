/********************************************************************************
** Form generated from reading ui file 'tab_search.ui'
**
** Created: Mon 3. Aug 01:33:17 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TAB_SEARCH_H
#define UI_TAB_SEARCH_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabSearch
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLabel *lblHelp;
    QHBoxLayout *hboxLayout1;
    QComboBox *searchBox;
    QPushButton *btnGo;
    QTreeWidget *tree;

    void setupUi(QWidget *TabSearch)
    {
        if (TabSearch->objectName().isEmpty())
            TabSearch->setObjectName(QString::fromUtf8("TabSearch"));
        TabSearch->resize(210, 409);
        vboxLayout = new QVBoxLayout(TabSearch);
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(TabSearch);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        lblHelp = new QLabel(TabSearch);
        lblHelp->setObjectName(QString::fromUtf8("lblHelp"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblHelp->sizePolicy().hasHeightForWidth());
        lblHelp->setSizePolicy(sizePolicy);
        lblHelp->setTextFormat(Qt::RichText);

        hboxLayout->addWidget(lblHelp);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setMargin(0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        searchBox = new QComboBox(TabSearch);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchBox->sizePolicy().hasHeightForWidth());
        searchBox->setSizePolicy(sizePolicy1);
        searchBox->setEditable(true);
        searchBox->setMaxCount(10);

        hboxLayout1->addWidget(searchBox);

        btnGo = new QPushButton(TabSearch);
        btnGo->setObjectName(QString::fromUtf8("btnGo"));

        hboxLayout1->addWidget(btnGo);


        vboxLayout->addLayout(hboxLayout1);

        tree = new QTreeWidget(TabSearch);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setRootIsDecorated(false);
        tree->setItemsExpandable(false);
        tree->setSortingEnabled(false);
        tree->setAllColumnsShowFocus(true);
        tree->setColumnCount(2);

        vboxLayout->addWidget(tree);


        retranslateUi(TabSearch);

        QMetaObject::connectSlotsByName(TabSearch);
    } // setupUi

    void retranslateUi(QWidget *TabSearch)
    {
        TabSearch->setWindowTitle(QApplication::translate("TabSearch", "Form1", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TabSearch", "Type in word(s) to search for:", 0, QApplication::UnicodeUTF8));
        lblHelp->setText(QApplication::translate("TabSearch", "<a href=\"help\">Help</a>", 0, QApplication::UnicodeUTF8));
        btnGo->setText(QApplication::translate("TabSearch", "&Go", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("TabSearch", "Location", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("TabSearch", "Title", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabSearch);
    } // retranslateUi

};

namespace Ui {
    class TabSearch: public Ui_TabSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_SEARCH_H
