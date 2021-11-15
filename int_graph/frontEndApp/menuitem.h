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
    int id;
    std::string nom;
    double prix;
    std::string menuName;

signals:

};

#endif // MENUITEM_H
