#ifndef APP_H
#define APP_H

#include <QObject>
#include <pqxx/pqxx>
#include <string>
#include "SQLRequests.hpp"
#include "user.hpp"

class app : public QObject
{
    Q_OBJECT
public:
    explicit app(QObject *parent = nullptr);
    App(): C{SQLRequests::connectionString()} {}
    void run();
    void displayConnectionMenu();
    void connexionEmp();
    void empNotFound();
    void billingMenu(User user);
    void displayBillingOptions();
    void changePassword();
    void changePrice();


private:    pqxx::connection C;
    std::string numEmp;
    std::string mdp;
    char choixExterne;
    char choixInterne;
    SQLRequests *sql{nullptr};

signals:

};

#endif // APP_H
