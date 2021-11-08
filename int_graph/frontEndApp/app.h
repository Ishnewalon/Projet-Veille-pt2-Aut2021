#ifndef APP_H
#define APP_H

#include <QObject>
#include <pqxx/pqxx>
#include <string>
#include "sqlrequests.h"
#include "user.h"

class app : public QObject
{
    Q_OBJECT
public:
    static app* pApp;

    app(): QObject{nullptr}, C{sqlRequests::connectionString()} {}
    void run();;
    void connectionEmp(std::string numEmp, std::string mdp);
    void empNotFound();
    void billingMenu(user &user);
    void displayBillingOptions();
    void changePassword();
    void changePrice();


private:
    pqxx::connection C;
    std::string numEmp;
    std::string mdp;
    char choixExterne;
    char choixInterne;
    sqlRequests *sql{nullptr};

signals:

};

#endif // APP_H
