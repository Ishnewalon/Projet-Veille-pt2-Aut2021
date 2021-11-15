#include "menuitem.h"

menuItem::menuItem(QObject *parent) : QObject(parent)
{

}

std::string menuItem::getNom() {
    return nom;
}

std::string menuItem::getPrix() {
    return prix;
}

std::string menuItem::getMenuName() {
    return menuName;
}
/*void setNom(QString itemName);
void setPrix(QString price);
void setMenuName(QString menuName);*/
