#include "dbrequests.h"

dbRequests::dbRequests(QObject *parent, std::string dbName,
                       std::string userName,
                       std::string password,
                       std::string hostaddr,
                       std::string port) : QObject(parent),
                                                    dbName("facturation_resto"),
                                                    userName("ishnewalon"),
                                                    password("inf556"),
                                                    hostaddr("127.0.0.1"),
                                                    port("5432")
{

}

std::string dbRequests::connectionString() {
    return "dbname = " + dbName + " user = " + userName + " password = " + password + " hostaddr = " + hostaddr + " port = " + port;
}

bool dbRequests::connectEmp(QString empId, QString mdp) {
    pqxx::connection C(connectionString());
    if (C.is_open()){
        std::cout << "La connexion a reussie" << std::endl;
        std::string sqlStatement = "SELECT * FROM utilisateurs WHERE numemp = '" + empId.toStdString() + "' AND mdp = '" + mdp.toStdString() + "' ;";
        pqxx::nontransaction N(C);
        pqxx::result R(N.exec(sqlStatement));

        for (pqxx::result::const_iterator iterator = R.begin(); iterator != R.end(); ++iterator){
            std::cout << "found you" << std::endl;
            employee.setNom(iterator["nom"].as<std::string>());
            employee.setPrenom(iterator["prenom"].as<std::string>());
            return true;
        }
        return false;
    }
    else {
         std::cout << "La connexion a echouee" << std::endl;
         return 1;
         }
    C.disconnect();
}

void dbRequests::seeEmp() {
    std::cout << employee.getPrenom() + " " + employee.getNom() << std::endl;
}

std::string dbRequests::getUserFirstName() {
    return employee.getPrenom();
}

