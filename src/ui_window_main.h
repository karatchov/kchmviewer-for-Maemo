/********************************************************************************
** Form generated from reading ui file 'window_main.ui'
**
** Created: Sat 1. Aug 04:25:11 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WINDOW_MAIN_H
#define UI_WINDOW_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *file_Print_action;
    QAction *file_exit_action;
    QAction *edit_Copy_action;
    QAction *edit_SelectAll_action;
    QAction *edit_FindAction;
    QAction *file_ExtractCHMAction;
    QAction *settings_SettingsAction;
    QAction *bookmark_AddAction;
    QAction *view_Increase_font_size_action;
    QAction *view_Decrease_font_size_action;
    QAction *view_View_HTML_source_action;
    QAction *view_Toggle_fullscreen_action;
    QAction *view_Toggle_contents_action;
    QAction *view_Locate_in_contents_action;
    QAction *view_Set_encoding_action;
    QAction *file_Open_action;
    QAction *nav_action_Back;
    QAction *nav_actionForward;
    QAction *nav_actionHome;
    QAction *nav_actionPreviousPage;
    QAction *nav_actionNextPageToc;
    QAction *action_Close_window;
    QWidget *widget;
    QMenuBar *menubar;
    QMenu *menu_Settings;
    QMenu *menu_Bookmarks;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_View;
    QMenu *menu_Windows;
    QToolBar *mainToolbar;
    QToolBar *navToolbar;
    QToolBar *viewToolbar;
    QStatusBar *mainStatusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(873, 591);
        file_Print_action = new QAction(MainWindow);
        file_Print_action->setObjectName(QString::fromUtf8("file_Print_action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon_print.png"), QSize(), QIcon::Normal, QIcon::Off);
        file_Print_action->setIcon(icon);
        file_exit_action = new QAction(MainWindow);
        file_exit_action->setObjectName(QString::fromUtf8("file_exit_action"));
        edit_Copy_action = new QAction(MainWindow);
        edit_Copy_action->setObjectName(QString::fromUtf8("edit_Copy_action"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icon_copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_Copy_action->setIcon(icon1);
        edit_SelectAll_action = new QAction(MainWindow);
        edit_SelectAll_action->setObjectName(QString::fromUtf8("edit_SelectAll_action"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("image8"), QSize(), QIcon::Normal, QIcon::Off);
        edit_SelectAll_action->setIcon(icon2);
        edit_FindAction = new QAction(MainWindow);
        edit_FindAction->setObjectName(QString::fromUtf8("edit_FindAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icon_find.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_FindAction->setIcon(icon3);
        file_ExtractCHMAction = new QAction(MainWindow);
        file_ExtractCHMAction->setObjectName(QString::fromUtf8("file_ExtractCHMAction"));
        settings_SettingsAction = new QAction(MainWindow);
        settings_SettingsAction->setObjectName(QString::fromUtf8("settings_SettingsAction"));
        bookmark_AddAction = new QAction(MainWindow);
        bookmark_AddAction->setObjectName(QString::fromUtf8("bookmark_AddAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icon_add_bookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        bookmark_AddAction->setIcon(icon4);
        view_Increase_font_size_action = new QAction(MainWindow);
        view_Increase_font_size_action->setObjectName(QString::fromUtf8("view_Increase_font_size_action"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icon_font_increase.png"), QSize(), QIcon::Normal, QIcon::Off);
        view_Increase_font_size_action->setIcon(icon5);
        view_Decrease_font_size_action = new QAction(MainWindow);
        view_Decrease_font_size_action->setObjectName(QString::fromUtf8("view_Decrease_font_size_action"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/icon_font_decrease.png"), QSize(), QIcon::Normal, QIcon::Off);
        view_Decrease_font_size_action->setIcon(icon6);
        view_View_HTML_source_action = new QAction(MainWindow);
        view_View_HTML_source_action->setObjectName(QString::fromUtf8("view_View_HTML_source_action"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/icon_view_source.png"), QSize(), QIcon::Normal, QIcon::Off);
        view_View_HTML_source_action->setIcon(icon7);
        view_Toggle_fullscreen_action = new QAction(MainWindow);
        view_Toggle_fullscreen_action->setObjectName(QString::fromUtf8("view_Toggle_fullscreen_action"));
        view_Toggle_fullscreen_action->setCheckable(true);
        view_Toggle_fullscreen_action->setAutoRepeat(false);
        view_Toggle_contents_action = new QAction(MainWindow);
        view_Toggle_contents_action->setObjectName(QString::fromUtf8("view_Toggle_contents_action"));
        view_Toggle_contents_action->setCheckable(true);
        view_Toggle_contents_action->setChecked(true);
        view_Toggle_contents_action->setAutoRepeat(false);
        view_Locate_in_contents_action = new QAction(MainWindow);
        view_Locate_in_contents_action->setObjectName(QString::fromUtf8("view_Locate_in_contents_action"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/icon_locate_in_content.png"), QSize(), QIcon::Normal, QIcon::Off);
        view_Locate_in_contents_action->setIcon(icon8);
        view_Set_encoding_action = new QAction(MainWindow);
        view_Set_encoding_action->setObjectName(QString::fromUtf8("view_Set_encoding_action"));
        file_Open_action = new QAction(MainWindow);
        file_Open_action->setObjectName(QString::fromUtf8("file_Open_action"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/icon_open_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        file_Open_action->setIcon(icon9);
        nav_action_Back = new QAction(MainWindow);
        nav_action_Back->setObjectName(QString::fromUtf8("nav_action_Back"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/icon_back.png"), QSize(), QIcon::Normal, QIcon::Off);
        nav_action_Back->setIcon(icon10);
        nav_actionForward = new QAction(MainWindow);
        nav_actionForward->setObjectName(QString::fromUtf8("nav_actionForward"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/icon_forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        nav_actionForward->setIcon(icon11);
        nav_actionHome = new QAction(MainWindow);
        nav_actionHome->setObjectName(QString::fromUtf8("nav_actionHome"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/icon_home.png"), QSize(), QIcon::Normal, QIcon::Off);
        nav_actionHome->setIcon(icon12);
        nav_actionPreviousPage = new QAction(MainWindow);
        nav_actionPreviousPage->setObjectName(QString::fromUtf8("nav_actionPreviousPage"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/icon_prev_page.png"), QSize(), QIcon::Normal, QIcon::Off);
        nav_actionPreviousPage->setIcon(icon13);
        nav_actionNextPageToc = new QAction(MainWindow);
        nav_actionNextPageToc->setObjectName(QString::fromUtf8("nav_actionNextPageToc"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/icon_next_page.png"), QSize(), QIcon::Normal, QIcon::Off);
        nav_actionNextPageToc->setIcon(icon14);
        action_Close_window = new QAction(MainWindow);
        action_Close_window->setObjectName(QString::fromUtf8("action_Close_window"));
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        MainWindow->setCentralWidget(widget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 873, 24));
        menu_Settings = new QMenu(menubar);
        menu_Settings->setObjectName(QString::fromUtf8("menu_Settings"));
        menu_Bookmarks = new QMenu(menubar);
        menu_Bookmarks->setObjectName(QString::fromUtf8("menu_Bookmarks"));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Windows = new QMenu(menubar);
        menu_Windows->setObjectName(QString::fromUtf8("menu_Windows"));
        MainWindow->setMenuBar(menubar);
        mainToolbar = new QToolBar(MainWindow);
        mainToolbar->setObjectName(QString::fromUtf8("mainToolbar"));
        mainToolbar->setOrientation(Qt::Horizontal);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolbar);
        navToolbar = new QToolBar(MainWindow);
        navToolbar->setObjectName(QString::fromUtf8("navToolbar"));
        navToolbar->setOrientation(Qt::Horizontal);
        MainWindow->addToolBar(Qt::TopToolBarArea, navToolbar);
        viewToolbar = new QToolBar(MainWindow);
        viewToolbar->setObjectName(QString::fromUtf8("viewToolbar"));
        viewToolbar->setOrientation(Qt::Horizontal);
        MainWindow->addToolBar(Qt::TopToolBarArea, viewToolbar);
        mainStatusBar = new QStatusBar(MainWindow);
        mainStatusBar->setObjectName(QString::fromUtf8("mainStatusBar"));
        MainWindow->setStatusBar(mainStatusBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Bookmarks->menuAction());
        menubar->addAction(menu_Windows->menuAction());
        menubar->addAction(menu_Settings->menuAction());
        menu_Settings->addAction(settings_SettingsAction);
        menu_Bookmarks->addAction(bookmark_AddAction);
        menu_Bookmarks->addSeparator();
        menu_File->addAction(file_Open_action);
        menu_File->addAction(file_Print_action);
        menu_File->addSeparator();
        menu_File->addAction(file_ExtractCHMAction);
        menu_Edit->addAction(edit_Copy_action);
        menu_Edit->addAction(edit_SelectAll_action);
        menu_Edit->addSeparator();
        menu_Edit->addAction(edit_FindAction);
        menu_View->addAction(view_Increase_font_size_action);
        menu_View->addAction(view_Decrease_font_size_action);
        menu_View->addAction(view_View_HTML_source_action);
        menu_View->addSeparator();
        menu_View->addAction(view_Toggle_fullscreen_action);
        menu_View->addAction(view_Toggle_contents_action);
        menu_View->addAction(view_Locate_in_contents_action);
        menu_View->addSeparator();
        menu_View->addAction(view_Set_encoding_action);
        menu_Windows->addAction(action_Close_window);
        menu_Windows->addSeparator();
        mainToolbar->addAction(file_Open_action);
        mainToolbar->addAction(file_Print_action);
        navToolbar->addAction(nav_actionHome);
        navToolbar->addAction(nav_action_Back);
        navToolbar->addAction(nav_actionForward);
        viewToolbar->addAction(view_Locate_in_contents_action);
        viewToolbar->addAction(view_Decrease_font_size_action);
        viewToolbar->addAction(view_Increase_font_size_action);
        viewToolbar->addAction(view_View_HTML_source_action);
        viewToolbar->addAction(bookmark_AddAction);
        viewToolbar->addAction(nav_actionPreviousPage);
        viewToolbar->addAction(nav_actionNextPageToc);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "kchmviewer", 0, QApplication::UnicodeUTF8));
        file_Print_action->setText(QApplication::translate("MainWindow", "&Print...", 0, QApplication::UnicodeUTF8));
        file_Print_action->setIconText(QApplication::translate("MainWindow", "Print", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        file_Print_action->setToolTip(QApplication::translate("MainWindow", "Print current page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        file_Print_action->setWhatsThis(QApplication::translate("MainWindow", "Prints currently opened page.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        file_Print_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        file_exit_action->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        file_exit_action->setIconText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        file_exit_action->setWhatsThis(QApplication::translate("MainWindow", "Exits the application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        file_exit_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        edit_Copy_action->setText(QApplication::translate("MainWindow", "C&opy", 0, QApplication::UnicodeUTF8));
        edit_Copy_action->setIconText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        edit_Copy_action->setWhatsThis(QApplication::translate("MainWindow", "Copies selected content to clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        edit_Copy_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        edit_SelectAll_action->setText(QApplication::translate("MainWindow", "&Select All", 0, QApplication::UnicodeUTF8));
        edit_SelectAll_action->setIconText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        edit_SelectAll_action->setWhatsThis(QApplication::translate("MainWindow", "Selects everything in the document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        edit_SelectAll_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        edit_FindAction->setText(QApplication::translate("MainWindow", "&Find...", 0, QApplication::UnicodeUTF8));
        edit_FindAction->setIconText(QApplication::translate("MainWindow", "Find", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        edit_FindAction->setToolTip(QApplication::translate("MainWindow", "Find text in currently opened page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        edit_FindAction->setWhatsThis(QApplication::translate("MainWindow", "Enters the Find in page mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        edit_FindAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        file_ExtractCHMAction->setText(QApplication::translate("MainWindow", "E&xtract CHM content...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        file_ExtractCHMAction->setToolTip(QApplication::translate("MainWindow", "Extract the CHM content to the directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        file_ExtractCHMAction->setWhatsThis(QApplication::translate("MainWindow", "Exctracts the CHM archive content to the specified directory. All the files are extracted.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        settings_SettingsAction->setText(QApplication::translate("MainWindow", "&Application settings...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        settings_SettingsAction->setToolTip(QApplication::translate("MainWindow", "Change the application settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        settings_SettingsAction->setWhatsThis(QApplication::translate("MainWindow", "Change the application settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        bookmark_AddAction->setText(QApplication::translate("MainWindow", "&Add bookmark", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bookmark_AddAction->setToolTip(QApplication::translate("MainWindow", "Adds a bookmark for currently opened page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        bookmark_AddAction->setWhatsThis(QApplication::translate("MainWindow", "Adds a bookmark for currently opened page. Remembers the opened page, and scroll position. Bookmarks are accessible through Bookmarks menu or tab.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        bookmark_AddAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        view_Increase_font_size_action->setText(QApplication::translate("MainWindow", "&Increase font size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        view_Increase_font_size_action->setToolTip(QApplication::translate("MainWindow", "Increase the font size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        view_Increase_font_size_action->setWhatsThis(QApplication::translate("MainWindow", "Increases the document font size. The new font size will be stored.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        view_Increase_font_size_action->setShortcut(QApplication::translate("MainWindow", "Ctrl++", 0, QApplication::UnicodeUTF8));
        view_Decrease_font_size_action->setText(QApplication::translate("MainWindow", "&Decrease font size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        view_Decrease_font_size_action->setToolTip(QApplication::translate("MainWindow", "Decrease the font size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        view_Decrease_font_size_action->setWhatsThis(QApplication::translate("MainWindow", "Decreases the document font size. The new font size will be stored.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        view_Decrease_font_size_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        view_View_HTML_source_action->setText(QApplication::translate("MainWindow", "&View HTML source", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        view_View_HTML_source_action->setToolTip(QApplication::translate("MainWindow", "View HTML source of current page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        view_View_HTML_source_action->setWhatsThis(QApplication::translate("MainWindow", "Shows the HTML source of currently opened page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        view_View_HTML_source_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        view_Toggle_fullscreen_action->setText(QApplication::translate("MainWindow", "Enable &full screen mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        view_Toggle_fullscreen_action->setWhatsThis(QApplication::translate("MainWindow", "Enters or leaves the fullscreen mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        view_Toggle_fullscreen_action->setShortcut(QApplication::translate("MainWindow", "F11", 0, QApplication::UnicodeUTF8));
        view_Toggle_contents_action->setText(QApplication::translate("MainWindow", "Enable &side window", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        view_Toggle_contents_action->setWhatsThis(QApplication::translate("MainWindow", "Shows or hides the size window (with Content, Index, Search and Bookmark tabs)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        view_Toggle_contents_action->setShortcut(QApplication::translate("MainWindow", "F9", 0, QApplication::UnicodeUTF8));
        view_Locate_in_contents_action->setText(QApplication::translate("MainWindow", "&Locate in contents window", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        view_Locate_in_contents_action->setToolTip(QApplication::translate("MainWindow", "Locate the current page in contents window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        view_Locate_in_contents_action->setWhatsThis(QApplication::translate("MainWindow", "If the current page is present in the Table of Contents, locate it there. ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        view_Locate_in_contents_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+", 0, QApplication::UnicodeUTF8));
        view_Set_encoding_action->setText(QApplication::translate("MainWindow", "Set &encoding", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        view_Set_encoding_action->setWhatsThis(QApplication::translate("MainWindow", "Changes the current document encoding. ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        file_Open_action->setText(QApplication::translate("MainWindow", "&Open...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        file_Open_action->setToolTip(QApplication::translate("MainWindow", "Open a CHM file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        file_Open_action->setWhatsThis(QApplication::translate("MainWindow", "Opens a new CHM file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        nav_action_Back->setText(QApplication::translate("MainWindow", "Back", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nav_action_Back->setToolTip(QApplication::translate("MainWindow", "Navigate back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nav_action_Back->setWhatsThis(QApplication::translate("MainWindow", "Navigate back in navigation history", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        nav_actionForward->setText(QApplication::translate("MainWindow", "Forward", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nav_actionForward->setToolTip(QApplication::translate("MainWindow", "Navigate forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nav_actionForward->setWhatsThis(QApplication::translate("MainWindow", "Navigate forward in navigation history", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        nav_actionHome->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nav_actionHome->setToolTip(QApplication::translate("MainWindow", "Navigate home", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nav_actionHome->setWhatsThis(QApplication::translate("MainWindow", "Navigate to the document Home page, as specified in the document.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        nav_actionPreviousPage->setText(QApplication::translate("MainWindow", "Previous page in Table of Context", 0, QApplication::UnicodeUTF8));
        nav_actionPreviousPage->setIconText(QApplication::translate("MainWindow", "Previous page in TOC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nav_actionPreviousPage->setToolTip(QApplication::translate("MainWindow", "Go to the previous page in the Table of Contents", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nav_actionPreviousPage->setWhatsThis(QApplication::translate("MainWindow", "Go to the previous page in the <b>Table of Contents</b><br><br><i>Shortcut: Ctrl+Left Arrow</i>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        nav_actionNextPageToc->setText(QApplication::translate("MainWindow", "Next page in Table of Context", 0, QApplication::UnicodeUTF8));
        nav_actionNextPageToc->setIconText(QApplication::translate("MainWindow", "Next page in TOC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nav_actionNextPageToc->setToolTip(QApplication::translate("MainWindow", "Go to the next page in the Table of Contents", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nav_actionNextPageToc->setWhatsThis(QApplication::translate("MainWindow", "Go to the next page in the <b>Table of Contents</b><br><br><i>Shortcut: Ctrl+Right Arrow</i>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        action_Close_window->setText(QApplication::translate("MainWindow", "&Close window", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Close_window->setToolTip(QApplication::translate("MainWindow", "Close current window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        action_Close_window->setWhatsThis(QApplication::translate("MainWindow", "Closes currently opened window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        action_Close_window->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        menu_Settings->setTitle(QApplication::translate("MainWindow", "&Settings", 0, QApplication::UnicodeUTF8));
        menu_Bookmarks->setTitle(QApplication::translate("MainWindow", "&Bookmarks", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", 0, QApplication::UnicodeUTF8));
        menu_Windows->setTitle(QApplication::translate("MainWindow", "&Windows", 0, QApplication::UnicodeUTF8));
        mainToolbar->setWindowTitle(QApplication::translate("MainWindow", "general toolbar", 0, QApplication::UnicodeUTF8));
        navToolbar->setWindowTitle(QApplication::translate("MainWindow", "navigation toolbar", 0, QApplication::UnicodeUTF8));
        viewToolbar->setWindowTitle(QApplication::translate("MainWindow", "action toolbar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_MAIN_H
