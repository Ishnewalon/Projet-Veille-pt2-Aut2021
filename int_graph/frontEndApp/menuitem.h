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


};

#endif // MENUITEM_H
