#ifndef SQLREQUESTS_H
#define SQLREQUESTS_H

#include <QObject>
#include <pqxx/pqxx>
#include <string>
#include "user.h"

class sqlRequests : public QObject
{
    Q_OBJECT
public:
    explicit sqlRequests(QObject *parent = nullptr);
    sqlRequests(pqxx::connection &C): C{C} {}
    static std::string connectionString();
    void listRecords(std::string tableName);
    bool findUser(user &user);
    void updatePassword(std::string empID, std::string oldPassword, std::string newPassword);
    void updatePrice(std::string tableName, std::string menuItemName, double newPrice);

private:
    static const std::string dbName;
    static const std::string userName;
    static const std::string password;
    static const std::string hostaddr;
    static const std::string port;
    pqxx::connection &C;


signals:

};

#endif // SQLREQUESTS_H
