#include "activitypage.h"

activityPage :: activityPage(QWidget* parent):
  QWidget(parent)
{
    QHBoxLayout* mainLayout = new QHBoxLayout(this);
    setLayout(mainLayout);
    mainLayout->setAlignment(Qt::AlignLeft);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);
        itemWidget = new QWidget(this);
        itemWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
//        itemWidget->setStyleSheet("border:1px solid gray;background-color:green");
        QHBoxLayout* itemLayout = new QHBoxLayout(itemWidget);
        itemLayout->setContentsMargins(30, 30, 30, 30);
        itemLayout->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        itemLayout->setSpacing(10);
        //活动列表 可以实现添加功能
            QWidget* listWidget = new QWidget(itemWidget);
            listWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            QHBoxLayout* listLayout = new QHBoxLayout(listWidget);
            listLayout->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
            listLayout->setSpacing(15);
            listLayout->setContentsMargins(0,0,0,0);
                itemList = new ScrollAreaCustom(false, listWidget);
                itemList->setFixedWidth(300);
                listLayout->addWidget(itemList);
                    QVector<QWidget*> items;
                    for(int i = 0; i < 50; i++){
                        textInputItem *version = new textInputItem("version", itemList);
                        version->setValue("beta");
                        version->setEnabled();
                        items.push_back(version);
                    }
                    itemList->addWidgets(items);
        itemLayout->addWidget(listWidget);
        //活动详情信息
            QWidget* itemInfoTable = new QWidget(itemWidget);
            itemInfoTable->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            itemInfoTable->setStyleSheet("border:1px solid gray;background-color:dark bule");
        itemLayout->addWidget(itemInfoTable);
    mainLayout->addWidget(itemWidget);
}
