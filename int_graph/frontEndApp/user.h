#ifndef USER_H
#define USER_H

#include <string>
#include <QObject>

class user : public QObject
{
    Q_OBJECT
public:
    explicit user(QObject *parent = nullptr);

signals:

};

#endif // USER_H
