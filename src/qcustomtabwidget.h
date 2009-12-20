#ifndef QCUSTOMTABWIDGET_H
#define QCUSTOMTABWIDGET_H

#include <QWidget>
#include <QTabWidget>
#include <QTabBar>


class QCustomTabWidget : public QTabWidget
{
    Q_OBJECT
public:
    QCustomTabWidget (QWidget * parent = 0): QTabWidget(parent) {}
    void hideTabBar()
    {
        QTabBar *tabBar = this->tabBar();
        tabBar->hide();
    }
    void showTabBar()
    {
        QTabBar *tabBar = this->tabBar();
        tabBar->show();
    }
};

#endif // QCUSTOMTABWIDGET_H
