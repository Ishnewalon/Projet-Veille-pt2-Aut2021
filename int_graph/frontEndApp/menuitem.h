#ifndef MENUITEM_H
#define MENUITEM_H

#include <QObject>

class menuItem : public QObject
{
    Q_OBJECT
public:
    explicit menuItem(QObject *parent = nullptr);

signals:

};

#endif // MENUITEM_H
