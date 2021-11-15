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

std::string menuItem::getNomMenu() {
    return nomMenu;
}

void menuItem::setNom(QString itemName) {
    nom = itemName.toStdString();
}

void menuItem::setPrix(QString price) {
    prix = price.toStdString();
}

void menuItem::setMenuName(QString menuName) {
    nomMenu = menuName.toStdString();
}
