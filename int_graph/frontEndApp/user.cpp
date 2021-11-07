#include <iostream>
#include <string>

#include "user.h"

user::user(QObject *parent) : QObject(parent)
{

}

std::string user::getNom(){
        return nom;
}

std::string user::getPrenom(){
        return prenom;
}

std::string user::getNumEmp(){
        return numEmp;
}

std::string user::getMDP(){
        return mdp;
}

void user::setNom(std::string leNom){
        nom = leNom;
}

void user::setPrenom(std::string lePrenom){
        prenom = lePrenom;
}

std::string user::toString(){
        return "Prenom: " + prenom + "\n"
                "Nom: " + nom + "\n"
                "Numero d'employe: " + numEmp;
}
