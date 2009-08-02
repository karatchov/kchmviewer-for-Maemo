/********************************************************************************
** Form generated from reading ui file 'dialog_setup.ui'
**
** Created: Sat 1. Aug 04:25:10 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOG_SETUP_H
#define UI_DIALOG_SETUP_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSetup
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *Widget8;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QGroupBox *buttonGroup1;
    QVBoxLayout *vboxLayout2;
    QRadioButton *m_radioOnBeginOpenDialog;
    QRadioButton *m_radioOnBeginOpenLast;
    QGroupBox *buttonGroup2;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1;
    QSpinBox *m_historySize;
    QLabel *textLabel2;
    QCheckBox *m_rememberHistoryInfo;
    QGroupBox *groupBox1;
    QHBoxLayout *hboxLayout2;
    QGroupBox *buttonGroup4;
    QVBoxLayout *vboxLayout4;
    QRadioButton *m_radioExtLinkOpenAlways;
    QRadioButton *m_radioExtLinkAsk;
    QRadioButton *m_radioExtLinkOpenNever;
    QGroupBox *buttonGroup5;
    QVBoxLayout *vboxLayout5;
    QRadioButton *m_radioNewChmOpenAlways;
    QRadioButton *m_radioNewChmAsk;
    QRadioButton *m_radioNewChmOpenNever;
    QSpacerItem *spacerItem;
    QWidget *Widget9;
    QVBoxLayout *vboxLayout6;
    QGroupBox *m_groupKDEsettings;
    QHBoxLayout *hboxLayout3;
    QGroupBox *buttonGroup5_2;
    QVBoxLayout *vboxLayout7;
    QRadioButton *m_radioUseQtextBrowser;
    QRadioButton *m_radioUseKHTMLPart;
    QRadioButton *m_radioUseQtWebkit;
    QGroupBox *groupKhtmlSecurity;
    QGridLayout *gridLayout;
    QCheckBox *m_enableRefresh;
    QCheckBox *m_enableJava;
    QCheckBox *m_enablePlugins;
    QCheckBox *m_enableJS;
    QSpacerItem *spacerItem1;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout8;
    QGroupBox *buttonGroup7;
    QVBoxLayout *vboxLayout9;
    QRadioButton *m_advViewSourceInternal;
    QRadioButton *m_advViewSourceExternal;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel1_3;
    QLineEdit *m_advExternalProgramName;
    QPushButton *btnBrowse;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout10;
    QCheckBox *boxLayoutDirectionRL;
    QCheckBox *boxAutodetectEncoding;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogSetup)
    {
        if (DialogSetup->objectName().isEmpty())
            DialogSetup->setObjectName(QString::fromUtf8("DialogSetup"));
        DialogSetup->resize(624, 443);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogSetup->sizePolicy().hasHeightForWidth());
        DialogSetup->setSizePolicy(sizePolicy);
        DialogSetup->setSizeGripEnabled(false);
        DialogSetup->setModal(true);
        vboxLayout = new QVBoxLayout(DialogSetup);
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(DialogSetup);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Widget8 = new QWidget();
        Widget8->setObjectName(QString::fromUtf8("Widget8"));
        vboxLayout1 = new QVBoxLayout(Widget8);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setMargin(9);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        buttonGroup1 = new QGroupBox(Widget8);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        vboxLayout2 = new QVBoxLayout(buttonGroup1);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setMargin(9);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        m_radioOnBeginOpenDialog = new QRadioButton(buttonGroup1);
        m_radioOnBeginOpenDialog->setObjectName(QString::fromUtf8("m_radioOnBeginOpenDialog"));

        vboxLayout2->addWidget(m_radioOnBeginOpenDialog);

        m_radioOnBeginOpenLast = new QRadioButton(buttonGroup1);
        m_radioOnBeginOpenLast->setObjectName(QString::fromUtf8("m_radioOnBeginOpenLast"));

        vboxLayout2->addWidget(m_radioOnBeginOpenLast);


        hboxLayout->addWidget(buttonGroup1);

        buttonGroup2 = new QGroupBox(Widget8);
        buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
        vboxLayout3 = new QVBoxLayout(buttonGroup2);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setMargin(9);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setMargin(0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel1 = new QLabel(buttonGroup2);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout1->addWidget(textLabel1);

        m_historySize = new QSpinBox(buttonGroup2);
        m_historySize->setObjectName(QString::fromUtf8("m_historySize"));
        m_historySize->setValue(10);

        hboxLayout1->addWidget(m_historySize);

        textLabel2 = new QLabel(buttonGroup2);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        hboxLayout1->addWidget(textLabel2);


        vboxLayout3->addLayout(hboxLayout1);

        m_rememberHistoryInfo = new QCheckBox(buttonGroup2);
        m_rememberHistoryInfo->setObjectName(QString::fromUtf8("m_rememberHistoryInfo"));

        vboxLayout3->addWidget(m_rememberHistoryInfo);


        hboxLayout->addWidget(buttonGroup2);


        vboxLayout1->addLayout(hboxLayout);

        groupBox1 = new QGroupBox(Widget8);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        hboxLayout2 = new QHBoxLayout(groupBox1);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setMargin(9);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        buttonGroup4 = new QGroupBox(groupBox1);
        buttonGroup4->setObjectName(QString::fromUtf8("buttonGroup4"));
        vboxLayout4 = new QVBoxLayout(buttonGroup4);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setMargin(9);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        m_radioExtLinkOpenAlways = new QRadioButton(buttonGroup4);
        m_radioExtLinkOpenAlways->setObjectName(QString::fromUtf8("m_radioExtLinkOpenAlways"));

        vboxLayout4->addWidget(m_radioExtLinkOpenAlways);

        m_radioExtLinkAsk = new QRadioButton(buttonGroup4);
        m_radioExtLinkAsk->setObjectName(QString::fromUtf8("m_radioExtLinkAsk"));

        vboxLayout4->addWidget(m_radioExtLinkAsk);

        m_radioExtLinkOpenNever = new QRadioButton(buttonGroup4);
        m_radioExtLinkOpenNever->setObjectName(QString::fromUtf8("m_radioExtLinkOpenNever"));

        vboxLayout4->addWidget(m_radioExtLinkOpenNever);


        hboxLayout2->addWidget(buttonGroup4);

        buttonGroup5 = new QGroupBox(groupBox1);
        buttonGroup5->setObjectName(QString::fromUtf8("buttonGroup5"));
        vboxLayout5 = new QVBoxLayout(buttonGroup5);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setMargin(9);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        m_radioNewChmOpenAlways = new QRadioButton(buttonGroup5);
        m_radioNewChmOpenAlways->setObjectName(QString::fromUtf8("m_radioNewChmOpenAlways"));

        vboxLayout5->addWidget(m_radioNewChmOpenAlways);

        m_radioNewChmAsk = new QRadioButton(buttonGroup5);
        m_radioNewChmAsk->setObjectName(QString::fromUtf8("m_radioNewChmAsk"));

        vboxLayout5->addWidget(m_radioNewChmAsk);

        m_radioNewChmOpenNever = new QRadioButton(buttonGroup5);
        m_radioNewChmOpenNever->setObjectName(QString::fromUtf8("m_radioNewChmOpenNever"));

        vboxLayout5->addWidget(m_radioNewChmOpenNever);


        hboxLayout2->addWidget(buttonGroup5);


        vboxLayout1->addWidget(groupBox1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        tabWidget->addTab(Widget8, QString());
        Widget9 = new QWidget();
        Widget9->setObjectName(QString::fromUtf8("Widget9"));
        vboxLayout6 = new QVBoxLayout(Widget9);
        vboxLayout6->setSpacing(6);
        vboxLayout6->setMargin(9);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        m_groupKDEsettings = new QGroupBox(Widget9);
        m_groupKDEsettings->setObjectName(QString::fromUtf8("m_groupKDEsettings"));
        hboxLayout3 = new QHBoxLayout(m_groupKDEsettings);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setMargin(9);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        buttonGroup5_2 = new QGroupBox(m_groupKDEsettings);
        buttonGroup5_2->setObjectName(QString::fromUtf8("buttonGroup5_2"));
        vboxLayout7 = new QVBoxLayout(buttonGroup5_2);
        vboxLayout7->setSpacing(6);
        vboxLayout7->setMargin(9);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        m_radioUseQtextBrowser = new QRadioButton(buttonGroup5_2);
        m_radioUseQtextBrowser->setObjectName(QString::fromUtf8("m_radioUseQtextBrowser"));

        vboxLayout7->addWidget(m_radioUseQtextBrowser);

        m_radioUseKHTMLPart = new QRadioButton(buttonGroup5_2);
        m_radioUseKHTMLPart->setObjectName(QString::fromUtf8("m_radioUseKHTMLPart"));

        vboxLayout7->addWidget(m_radioUseKHTMLPart);

        m_radioUseQtWebkit = new QRadioButton(buttonGroup5_2);
        m_radioUseQtWebkit->setObjectName(QString::fromUtf8("m_radioUseQtWebkit"));

        vboxLayout7->addWidget(m_radioUseQtWebkit);


        hboxLayout3->addWidget(buttonGroup5_2);

        groupKhtmlSecurity = new QGroupBox(m_groupKDEsettings);
        groupKhtmlSecurity->setObjectName(QString::fromUtf8("groupKhtmlSecurity"));
        gridLayout = new QGridLayout(groupKhtmlSecurity);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_enableRefresh = new QCheckBox(groupKhtmlSecurity);
        m_enableRefresh->setObjectName(QString::fromUtf8("m_enableRefresh"));

        gridLayout->addWidget(m_enableRefresh, 1, 1, 1, 1);

        m_enableJava = new QCheckBox(groupKhtmlSecurity);
        m_enableJava->setObjectName(QString::fromUtf8("m_enableJava"));

        gridLayout->addWidget(m_enableJava, 1, 0, 1, 1);

        m_enablePlugins = new QCheckBox(groupKhtmlSecurity);
        m_enablePlugins->setObjectName(QString::fromUtf8("m_enablePlugins"));

        gridLayout->addWidget(m_enablePlugins, 0, 1, 1, 1);

        m_enableJS = new QCheckBox(groupKhtmlSecurity);
        m_enableJS->setObjectName(QString::fromUtf8("m_enableJS"));

        gridLayout->addWidget(m_enableJS, 0, 0, 1, 1);


        hboxLayout3->addWidget(groupKhtmlSecurity);


        vboxLayout6->addWidget(m_groupKDEsettings);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacerItem1);

        tabWidget->addTab(Widget9, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout8 = new QVBoxLayout(TabPage);
        vboxLayout8->setSpacing(6);
        vboxLayout8->setMargin(11);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        buttonGroup7 = new QGroupBox(TabPage);
        buttonGroup7->setObjectName(QString::fromUtf8("buttonGroup7"));
        vboxLayout9 = new QVBoxLayout(buttonGroup7);
        vboxLayout9->setSpacing(6);
        vboxLayout9->setMargin(9);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        m_advViewSourceInternal = new QRadioButton(buttonGroup7);
        m_advViewSourceInternal->setObjectName(QString::fromUtf8("m_advViewSourceInternal"));

        vboxLayout9->addWidget(m_advViewSourceInternal);

        m_advViewSourceExternal = new QRadioButton(buttonGroup7);
        m_advViewSourceExternal->setObjectName(QString::fromUtf8("m_advViewSourceExternal"));

        vboxLayout9->addWidget(m_advViewSourceExternal);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setMargin(0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        textLabel1_3 = new QLabel(buttonGroup7);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setWordWrap(false);

        hboxLayout4->addWidget(textLabel1_3);

        m_advExternalProgramName = new QLineEdit(buttonGroup7);
        m_advExternalProgramName->setObjectName(QString::fromUtf8("m_advExternalProgramName"));

        hboxLayout4->addWidget(m_advExternalProgramName);

        btnBrowse = new QPushButton(buttonGroup7);
        btnBrowse->setObjectName(QString::fromUtf8("btnBrowse"));

        hboxLayout4->addWidget(btnBrowse);


        vboxLayout9->addLayout(hboxLayout4);


        vboxLayout8->addWidget(buttonGroup7);

        groupBox = new QGroupBox(TabPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout10 = new QVBoxLayout(groupBox);
        vboxLayout10->setSpacing(6);
        vboxLayout10->setMargin(11);
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        boxLayoutDirectionRL = new QCheckBox(groupBox);
        boxLayoutDirectionRL->setObjectName(QString::fromUtf8("boxLayoutDirectionRL"));

        vboxLayout10->addWidget(boxLayoutDirectionRL);

        boxAutodetectEncoding = new QCheckBox(groupBox);
        boxAutodetectEncoding->setObjectName(QString::fromUtf8("boxAutodetectEncoding"));

        vboxLayout10->addWidget(boxAutodetectEncoding);


        vboxLayout8->addWidget(groupBox);

        spacerItem2 = new QSpacerItem(567, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout8->addItem(spacerItem2);

        tabWidget->addTab(TabPage, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DialogSetup);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(m_radioOnBeginOpenDialog, m_radioOnBeginOpenLast);
        QWidget::setTabOrder(m_radioOnBeginOpenLast, m_historySize);
        QWidget::setTabOrder(m_historySize, m_rememberHistoryInfo);
        QWidget::setTabOrder(m_rememberHistoryInfo, m_radioExtLinkOpenAlways);
        QWidget::setTabOrder(m_radioExtLinkOpenAlways, m_radioExtLinkAsk);
        QWidget::setTabOrder(m_radioExtLinkAsk, m_radioExtLinkOpenNever);
        QWidget::setTabOrder(m_radioExtLinkOpenNever, m_radioNewChmOpenAlways);
        QWidget::setTabOrder(m_radioNewChmOpenAlways, m_radioNewChmAsk);
        QWidget::setTabOrder(m_radioNewChmAsk, m_radioNewChmOpenNever);
        QWidget::setTabOrder(m_radioNewChmOpenNever, m_radioUseQtextBrowser);
        QWidget::setTabOrder(m_radioUseQtextBrowser, m_radioUseKHTMLPart);
        QWidget::setTabOrder(m_radioUseKHTMLPart, m_enableJS);
        QWidget::setTabOrder(m_enableJS, m_enableJava);
        QWidget::setTabOrder(m_enableJava, m_enablePlugins);
        QWidget::setTabOrder(m_enablePlugins, m_enableRefresh);
        QWidget::setTabOrder(m_enableRefresh, m_advViewSourceInternal);
        QWidget::setTabOrder(m_advViewSourceInternal, m_advViewSourceExternal);
        QWidget::setTabOrder(m_advViewSourceExternal, m_advExternalProgramName);
        QWidget::setTabOrder(m_advExternalProgramName, buttonBox);
        QWidget::setTabOrder(buttonBox, tabWidget);

        retranslateUi(DialogSetup);
        QObject::connect(m_radioUseKHTMLPart, SIGNAL(toggled(bool)), groupKhtmlSecurity, SLOT(setEnabled(bool)));
        QObject::connect(m_advViewSourceExternal, SIGNAL(toggled(bool)), m_advExternalProgramName, SLOT(setEnabled(bool)));
        QObject::connect(m_radioUseQtextBrowser, SIGNAL(toggled(bool)), groupKhtmlSecurity, SLOT(setDisabled(bool)));
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogSetup, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogSetup, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogSetup);
    } // setupUi

    void retranslateUi(QDialog *DialogSetup)
    {
        DialogSetup->setWindowTitle(QApplication::translate("DialogSetup", "KchmViewer settings", 0, QApplication::UnicodeUTF8));
        buttonGroup1->setTitle(QApplication::translate("DialogSetup", "If no arguments given on load", 0, QApplication::UnicodeUTF8));
        m_radioOnBeginOpenDialog->setText(QApplication::translate("DialogSetup", "Open the 'open CHM file' dialog", 0, QApplication::UnicodeUTF8));
        m_radioOnBeginOpenLast->setText(QApplication::translate("DialogSetup", "Open the &last used CHM file, if exist", 0, QApplication::UnicodeUTF8));
        m_radioOnBeginOpenLast->setShortcut(QApplication::translate("DialogSetup", "Alt+L", 0, QApplication::UnicodeUTF8));
        buttonGroup2->setTitle(QApplication::translate("DialogSetup", "History", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("DialogSetup", "Store history information for", 0, QApplication::UnicodeUTF8));
        m_historySize->setPrefix(QString());
        textLabel2->setText(QApplication::translate("DialogSetup", "latest files", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_rememberHistoryInfo->setToolTip(QApplication::translate("DialogSetup", "Remembers the information about the files, which were opened. Remembers last opened page, search history, font size, bookmarks and so on.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_rememberHistoryInfo->setText(QApplication::translate("DialogSetup", "R&emember extra information for history files", 0, QApplication::UnicodeUTF8));
        m_rememberHistoryInfo->setShortcut(QApplication::translate("DialogSetup", "Alt+E", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("DialogSetup", "CHM security settings", 0, QApplication::UnicodeUTF8));
        buttonGroup4->setTitle(QApplication::translate("DialogSetup", "When external link clicked", 0, QApplication::UnicodeUTF8));
        m_radioExtLinkOpenAlways->setText(QApplication::translate("DialogSetup", "Alwa&ys open it in external browser", 0, QApplication::UnicodeUTF8));
        m_radioExtLinkOpenAlways->setShortcut(QApplication::translate("DialogSetup", "Alt+Y", 0, QApplication::UnicodeUTF8));
        m_radioExtLinkAsk->setText(QApplication::translate("DialogSetup", "Ask for confirmation", 0, QApplication::UnicodeUTF8));
        m_radioExtLinkOpenNever->setText(QApplication::translate("DialogSetup", "Do not open the link", 0, QApplication::UnicodeUTF8));
        m_radioExtLinkOpenNever->setShortcut(QString());
        buttonGroup5->setTitle(QApplication::translate("DialogSetup", "When link pointed to a new CHM file clicked", 0, QApplication::UnicodeUTF8));
        m_radioNewChmOpenAlways->setText(QApplication::translate("DialogSetup", "Always open a new CHM file", 0, QApplication::UnicodeUTF8));
        m_radioNewChmAsk->setText(QApplication::translate("DialogSetup", "Ask for confirmation", 0, QApplication::UnicodeUTF8));
        m_radioNewChmOpenNever->setText(QApplication::translate("DialogSetup", "Do not open a new CHM file", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Widget8), QApplication::translate("DialogSetup", "General behavior", 0, QApplication::UnicodeUTF8));
        m_groupKDEsettings->setTitle(QApplication::translate("DialogSetup", "KDE version settings", 0, QApplication::UnicodeUTF8));
        buttonGroup5_2->setTitle(QApplication::translate("DialogSetup", "To show HTML content, use", 0, QApplication::UnicodeUTF8));
        m_radioUseQtextBrowser->setText(QApplication::translate("DialogSetup", "&QTextBrowser-based widget", 0, QApplication::UnicodeUTF8));
        m_radioUseQtextBrowser->setShortcut(QApplication::translate("DialogSetup", "Alt+Q", 0, QApplication::UnicodeUTF8));
        m_radioUseKHTMLPart->setText(QApplication::translate("DialogSetup", "&KHTMLPart-based widget", 0, QApplication::UnicodeUTF8));
        m_radioUseKHTMLPart->setShortcut(QApplication::translate("DialogSetup", "Alt+K", 0, QApplication::UnicodeUTF8));
        m_radioUseQtWebkit->setText(QApplication::translate("DialogSetup", "Qt &Webkit (requires Qt 4.4 or higher)", 0, QApplication::UnicodeUTF8));
        groupKhtmlSecurity->setTitle(QApplication::translate("DialogSetup", "KHTMLPart security", 0, QApplication::UnicodeUTF8));
        m_enableRefresh->setText(QApplication::translate("DialogSetup", "Enable &refresh", 0, QApplication::UnicodeUTF8));
        m_enableRefresh->setShortcut(QApplication::translate("DialogSetup", "Alt+R", 0, QApplication::UnicodeUTF8));
        m_enableJava->setText(QApplication::translate("DialogSetup", "Enable &Java", 0, QApplication::UnicodeUTF8));
        m_enableJava->setShortcut(QApplication::translate("DialogSetup", "Alt+J", 0, QApplication::UnicodeUTF8));
        m_enablePlugins->setText(QApplication::translate("DialogSetup", "Enable &plugins", 0, QApplication::UnicodeUTF8));
        m_enablePlugins->setShortcut(QApplication::translate("DialogSetup", "Alt+P", 0, QApplication::UnicodeUTF8));
        m_enableJS->setText(QApplication::translate("DialogSetup", "Enable Java&Script", 0, QApplication::UnicodeUTF8));
        m_enableJS->setShortcut(QApplication::translate("DialogSetup", "Alt+S", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Widget9), QApplication::translate("DialogSetup", "Version-specific settings", 0, QApplication::UnicodeUTF8));
        buttonGroup7->setTitle(QApplication::translate("DialogSetup", "View HTML source command uses", 0, QApplication::UnicodeUTF8));
        m_advViewSourceInternal->setText(QApplication::translate("DialogSetup", "Built-in HTML source viewer", 0, QApplication::UnicodeUTF8));
        m_advViewSourceInternal->setShortcut(QString());
        m_advViewSourceExternal->setText(QApplication::translate("DialogSetup", "E&xternal program, specified below", 0, QApplication::UnicodeUTF8));
        m_advViewSourceExternal->setShortcut(QApplication::translate("DialogSetup", "Alt+X", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("DialogSetup", "External program:", 0, QApplication::UnicodeUTF8));
        btnBrowse->setText(QApplication::translate("DialogSetup", "&Browse", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DialogSetup", "Other", 0, QApplication::UnicodeUTF8));
        boxLayoutDirectionRL->setText(QApplication::translate("DialogSetup", "Use right-to-left layout direction (Arabic adn Hebrew layouts)", 0, QApplication::UnicodeUTF8));
        boxAutodetectEncoding->setText(QApplication::translate("DialogSetup", "Automatically detect encoding for KHTMLPart and WebKit browsers (not recommended)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(TabPage), QApplication::translate("DialogSetup", "Advanced", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DialogSetup);
    } // retranslateUi

};

namespace Ui {
    class DialogSetup: public Ui_DialogSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SETUP_H
