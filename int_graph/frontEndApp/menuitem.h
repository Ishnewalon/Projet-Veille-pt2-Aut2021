#ifndef MENUITEM_H
#define MENUITEM_H

#include <QObject>
#include <iostream>
#include <string>

class menuItem : public QObject
{
    Q_OBJECT
public:
    explicit menuItem(QObject *parent = nullptr);
    std::string getNom();
    std::string getPrix();
    std::string getNomMenu();
    void setNom(std::string itemName);
    void setPrix(std::string price);
    void setMenuName(std::string menuName);

private:
    int id;
    std::string nom;
    std::string prix;
    std::string nomMenu;

signals:

};

#endif // MENUITEM_H
