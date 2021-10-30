#include "login.h"
#include <QDebug>

Login::Login(QObject *parent) : QObject(parent)
{

}

void Login::callMe()
{
    qDebug() << "I'm doing it";
}

