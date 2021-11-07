#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "sqlrequests.h"

sqlRequests::sqlRequests(QObject *parent) : QObject(parent)
{

}
const std::string sqlRequests::dbName {"facturation_resto"};
const std::string sqlRequests::userName {"ishnewalon"};
const std::string sqlRequests::password {"inf556"};
const std::string sqlRequests::hostaddr {"127.0.0.1"};
const std::string sqlRequests::port {"5432"};

void sqlRequests::listRecords(std::string tableName){
                std::string sqlStatement = "SELECT * FROM " + tableName + ";";
                pqxx::nontransaction N(C);
                pqxx::result R(N.exec(sqlStatement));
                int counter = 1;
                for (pqxx::result::const_iterator iterator = R.begin(); iterator != R.end(); ++iterator){ //See what is best ++iterator or iterator++

                        std::cout <<  iterator["nom"].as<std::string>() << std::endl;
                        counter++;
                }
                std::cout << "Fin des donnes" << std::endl;
}

bool sqlRequests::findUser(user &user){
                std::string sqlStatement = "SELECT * FROM utilisateurs WHERE numemp = '" + user.getNumEmp() + "' AND mdp = '" + user.getMDP() + "' ;";
                pqxx::nontransaction N(C);
                pqxx::result R(N.exec(sqlStatement));

                for (pqxx::result::const_iterator iterator = R.begin(); iterator != R.end(); ++iterator){
                        user.setNom(iterator["nom"].as<std::string>());
                        user.setPrenom(iterator["prenom"].as<std::string>());
                        return true;
                }
                return false;
}


void sqlRequests::updatePassword(std::string empID, std::string oldPassword, std::string newPassword) {
        std::string sqlStatement = "UPDATE utilisateurs SET mdp = '" + newPassword + "'" \
                                     " WHERE mdp = '" + oldPassword + "' AND numemp = '" + empID + "';";
        pqxx::work W(C);
        W.exec(sqlStatement);
        W.commit();
        std::cout << "Changement du mot de passe a ete un succes" << std::endl;
}

void sqlRequests::updatePrice(std::string tableName, std::string menuItemName, double newPrice) {
        std::string sqlStatement = "UPDATE " + tableName + " SET prix = " + std::to_string(newPrice) + \
                                    " WHERE nom = '" + menuItemName + "';";
        pqxx::work W(C);
        W.exec(sqlStatement);
        W.commit();
        std::cout << "Changement du prix effectue" << std::endl;
}

