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
    std::string getMenuName();
    void setNom(QString itemName);
    void setPrix(QString price);
    void setMenuName(QString menuName);

private:
    int id;
    std::string nom;
    std::string prix;
    std::string menuName;

signals:

};

#endif // MENUITEM_H
