#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>

class Login : public QObject
{
    Q_OBJECT
public:
    explicit Login(QObject *parent = nullptr);

signals:

public slots:
    void callMe();
};

#endif // LOGIN_H