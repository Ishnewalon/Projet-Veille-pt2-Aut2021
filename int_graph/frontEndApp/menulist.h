#ifndef MENULIST_H
#define MENULIST_H

#include <QObject>
#include <iostream>
#include <string>
#include <list>
#include "menuitem.h"

class menuList : public QObject
{
    Q_OBJECT
public:
    explicit menuList(QObject *parent = nullptr);
    std::list<menuItem> menuItemList;
 //   void addToList(menuItem &item);
    void emptyList();

private:


signals:

};

#endif // MENULIST_H
