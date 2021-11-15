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

void menuItem::setNom(std::string itemName) {
    nom = itemName;
}

void menuItem::setPrix(std::string price) {
    prix = price;
}

void menuItem::setNomMenu(std::string menuName) {
    nomMenu = menuName;
}
