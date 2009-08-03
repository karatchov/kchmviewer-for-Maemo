/*
*********************************************************************
**
** Copyright (C) 1992-2006 Trolltech ASA. All rights reserved.
**
** This file is part of the Qt Assistant of the Qt Toolkit.
**
** This file may be used under the terms of the GNU General Public
** License version 2.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of
** this file.  Please review the following information to ensure GNU
** General Public Licensing requirements will be met:
** http://www.trolltech.com/products/qt/opensource.html
**
** If you are unsure which license is appropriate for your use, please
** review the following information:
** http://www.trolltech.com/products/qt/licensing.html or contact the
** sales department at sales@trolltech.com.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
*********************************************************************
*/

/********************************************************************************
** Form generated from reading ui file 'window_browser.ui'
**
** Created: Mon 3. Aug 01:33:17 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WINDOW_BROWSER_H
#define UI_WINDOW_BROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabbedBrowser
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *frontpage;
    QGridLayout *gridLayout;
    QFrame *frameFind;
    QHBoxLayout *hboxLayout;
    QToolButton *toolClose;
    QLineEdit *editFind;
    QToolButton *toolPrevious;
    QToolButton *toolNext;
    QCheckBox *checkCase;
    QCheckBox *checkWholeWords;
    QLabel *labelWrapped;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *TabbedBrowser)
    {
        if (TabbedBrowser->objectName().isEmpty())
            TabbedBrowser->setObjectName(QString::fromUtf8("TabbedBrowser"));
        TabbedBrowser->resize(749, 664);
        vboxLayout = new QVBoxLayout(TabbedBrowser);
        vboxLayout->setSpacing(0);
        vboxLayout->setMargin(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(TabbedBrowser);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        frontpage = new QWidget();
        frontpage->setObjectName(QString::fromUtf8("frontpage"));
        gridLayout = new QGridLayout(frontpage);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setMargin(8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget->addTab(frontpage, QString());

        vboxLayout->addWidget(tabWidget);

        frameFind = new QFrame(TabbedBrowser);
        frameFind->setObjectName(QString::fromUtf8("frameFind"));
        frameFind->setFrameShape(QFrame::StyledPanel);
        frameFind->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frameFind);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        toolClose = new QToolButton(frameFind);
        toolClose->setObjectName(QString::fromUtf8("toolClose"));
        const QIcon icon = QIcon(QString::fromUtf8(":/images/find_close.png"));
        toolClose->setIcon(icon);
        toolClose->setAutoRaise(true);

        hboxLayout->addWidget(toolClose);

        editFind = new QLineEdit(frameFind);
        editFind->setObjectName(QString::fromUtf8("editFind"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editFind->sizePolicy().hasHeightForWidth());
        editFind->setSizePolicy(sizePolicy);
        editFind->setMinimumSize(QSize(150, 0));

        hboxLayout->addWidget(editFind);

        toolPrevious = new QToolButton(frameFind);
        toolPrevious->setObjectName(QString::fromUtf8("toolPrevious"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/find_previous.png"));
        toolPrevious->setIcon(icon1);
        toolPrevious->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolPrevious->setAutoRaise(true);

        hboxLayout->addWidget(toolPrevious);

        toolNext = new QToolButton(frameFind);
        toolNext->setObjectName(QString::fromUtf8("toolNext"));
        toolNext->setMinimumSize(QSize(0, 0));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/find_next.png"));
        toolNext->setIcon(icon2);
        toolNext->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolNext->setAutoRaise(true);
        toolNext->setArrowType(Qt::NoArrow);

        hboxLayout->addWidget(toolNext);

        checkCase = new QCheckBox(frameFind);
        checkCase->setObjectName(QString::fromUtf8("checkCase"));

        hboxLayout->addWidget(checkCase);

        checkWholeWords = new QCheckBox(frameFind);
        checkWholeWords->setObjectName(QString::fromUtf8("checkWholeWords"));

        hboxLayout->addWidget(checkWholeWords);

        labelWrapped = new QLabel(frameFind);
        labelWrapped->setObjectName(QString::fromUtf8("labelWrapped"));
        labelWrapped->setMinimumSize(QSize(0, 20));
        labelWrapped->setMaximumSize(QSize(1050, 20));
        labelWrapped->setTextFormat(Qt::RichText);
        labelWrapped->setScaledContents(true);
        labelWrapped->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout->addWidget(labelWrapped);

        spacerItem = new QSpacerItem(81, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addWidget(frameFind);


        retranslateUi(TabbedBrowser);

        QMetaObject::connectSlotsByName(TabbedBrowser);
    } // setupUi

    void retranslateUi(QWidget *TabbedBrowser)
    {
        TabbedBrowser->setWindowTitle(QApplication::translate("TabbedBrowser", "TabbedBrowser", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(frontpage), QApplication::translate("TabbedBrowser", "Untitled", 0, QApplication::UnicodeUTF8));
        toolClose->setText(QString());
        toolPrevious->setText(QApplication::translate("TabbedBrowser", "Previous", 0, QApplication::UnicodeUTF8));
        toolNext->setText(QApplication::translate("TabbedBrowser", "Next", 0, QApplication::UnicodeUTF8));
        checkCase->setText(QApplication::translate("TabbedBrowser", "Case Sensitive", 0, QApplication::UnicodeUTF8));
        checkWholeWords->setText(QApplication::translate("TabbedBrowser", "Whole words", 0, QApplication::UnicodeUTF8));
        labelWrapped->setText(QApplication::translate("TabbedBrowser", "<img src=\":/images/find_wrap.png\">&nbsp;Search wrapped", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabbedBrowser);
    } // retranslateUi

};

namespace Ui {
    class TabbedBrowser: public Ui_TabbedBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_BROWSER_H
