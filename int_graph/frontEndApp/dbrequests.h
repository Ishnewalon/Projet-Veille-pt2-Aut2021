#ifndef DBREQUESTS_H
#define DBREQUESTS_H

#include <QObject>
#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "user.h"

class dbRequests : public QObject
{
    Q_OBJECT
public:
    explicit dbRequests(QObject *parent = nullptr,
                        std::string dbName = "facturation_resto",
                        std::string userName = "ishnewalon",
                        std::string password = "inf556",
                        std::string hostaddr = "127.0.0.1",
                        std::string port = "5432");
    std::string connectionString();
    Q_INVOKABLE bool connectEmp(QString empId, QString mdp);
    Q_INVOKABLE void seeEmp();
    Q_INVOKABLE QString getUserFirstName();
    Q_INVOKABLE QString getUserLastName();
    Q_INVOKABLE void updatePassword(QString empId, QString oldPassword, QString newPassword);
    Q_INVOKABLE void updatePrice(QString tableName, QString menuItemName, QString newPrice);

private:
    user employee;
    std::string dbName;
    std::string userName;
    std::string password;
    std::string hostaddr;
    std::string port;
signals:

};

#endif // DBREQUESTS_H
