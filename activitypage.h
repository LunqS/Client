#ifndef ACTIVITYPAGE_H
#define ACTIVITYPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "customWidgets.h"
#include "customScrollContainer.h"
#include "slidepage.h"
#include "clock.h"
class activityAdd : public QWidget{
    Q_OBJECT
private:
    QWidget* activityItem = nullptr;
    bigIconButton* addItem = nullptr;
    bigIconButton* finishItem = nullptr;
public:
    activityAdd(QWidget* parent = nullptr);
};

class activityPage : public QWidget{
    Q_OBJECT
private:
    QWidget* itemWidget = nullptr;
    QWidget* itemInfo = nullptr;
    SlidePage* addActivity;
    ScrollAreaCustom* itemList = nullptr;
    QVector<SlidePage*> pageList;
    int cornerRadius = 12;
//    void resizeEvent(QResizeEvent*);
public:
    activityPage(QWidget* parent = nullptr);
};

#endif // ACTIVITYPAGE_H
