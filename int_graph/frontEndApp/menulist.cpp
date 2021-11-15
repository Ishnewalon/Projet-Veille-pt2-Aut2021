#include "menulist.h"

menuList::menuList(QObject *parent) : QObject(parent)
{

}

/*void menuList::addToList(menuItem &item) {
    menuItemList.push_back(item);
}*/

void menuList::emptyList() {
    menuItemList.clear();
}
