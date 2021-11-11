#ifndef DBREQUESTS_H
#define DBREQUESTS_H

#include <QObject>
#include <iostream>
#include <string>
#include <pqxx/pqxx>

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


private:
    std::string dbName;
    std::string userName;
    std::string password;
    std::string hostaddr;
    std::string port;
signals:
        bool connectEmp(QString empId, QString mdp);
};

#endif // DBREQUESTS_H
