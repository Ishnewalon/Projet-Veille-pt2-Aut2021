#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include <string>

class menuItem
{
public:
    menuItem();
    std::string getNom();
    std::string getPrix();
    std::string getNomMenu();
    void setNom(std::string itemName);
    void setPrix(std::string price);
    void setNomMenu(std::string menuName);

private:
    std::string nom;
    std::string prix;
    std::string nomMenu;

};

#endif // MENUITEM_H