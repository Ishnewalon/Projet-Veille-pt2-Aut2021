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
    return 0;
}

void dbRequests::seeEmp() {
    std::cout << employee.getPrenom() + " " + employee.getNom() << std::endl;
}

QString dbRequests::getUserFirstName() {
    return QString::fromStdString(employee.getPrenom());
}

QString dbRequests::getUserLastName() {
    return QString::fromStdString(employee.getNom());
}

void dbRequests::updatePassword(QString empID, QString oldPassword, QString newPassword) {
    pqxx::connection C(connectionString());
    if (C.is_open()){
        std::cout << "La connexion a reussie" << std::endl;
        std::string sqlStatement = "UPDATE utilisateurs SET mdp = '" + newPassword.toStdString() + "'" \
                                     " WHERE mdp = '" + oldPassword.toStdString() + "' AND numemp = '" + empID.toStdString() + "';";
        pqxx::work W(C);
        W.exec(sqlStatement);
        W.commit();
        std::cout << "Changement du mot de passe a ete un succes" << std::endl;
    }
    else {
         std::cout << "La connexion a echouee" << std::endl;
    }
    C.disconnect();
}

void dbRequests::updatePrice(QString tableName, QString menuItemName, QString newPrice) {
    pqxx::connection C(connectionString());
    if (C.is_open()){
        std::cout << "La connexion a reussie" << std::endl;
        std::string sqlStatement = "UPDATE " + tableName.toStdString() + " SET prix = " + newPrice.toStdString() + \
                                    " WHERE nom = '" + menuItemName.toStdString() + "';";
        pqxx::work W(C);
        W.exec(sqlStatement);
        W.commit();
        std::cout << "Changement du prix effectue" << std::endl;
    }
    else {
         std::cout << "La connexion a echouee" << std::endl;
    }
    C.disconnect();
}

void dbRequests::fillMenuList(QString tableName) {
    pqxx::connection C(connectionString());
    if (C.is_open()){
        std::cout << "La connexion a reussie" << std::endl;
        std::string sqlStatement = "SELECT * FROM " + tableName.toStdString() + ";";
        pqxx::nontransaction N(C);
        pqxx::result R(N.exec(sqlStatement));

        for (pqxx::result::const_iterator iterator = R.begin(); iterator != R.end(); ++iterator){
            menuItem item;
            item.setNom(iterator["nom"].as<std::string>());
            item.setPrix(iterator["prix"].as<std::string>());   //might have to be double
            item.setNomMenu(tableName.toStdString());
            std::cout << item.getNom() << std::endl;
            menu.addToList(item);
        }
    }
    else {
         std::cout << "La connexion a echouee" << std::endl;
    }
    C.disconnect();
}

void dbRequests::printMenuList() {
    for (auto i = menu.menuItemList.begin(); i != menu.menuItemList.end(); i++) {
        std::cout << i->getNom() << ' ' << i->getPrix();
    }
}
