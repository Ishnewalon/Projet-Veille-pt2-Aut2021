#ifndef USER_H
#define USER_H

#include <string>
#include <QObject>

class user : public QObject
{
    Q_OBJECT
public:
    explicit user(QObject *parent = nullptr);
    User(std::string empID, std::string mdpEmp):numEmp{empID},mdp{mdpEmp}{}
    std::string getNom();
    std::string getPrenom();
    std::string getNumEmp();
    std::string getMDP();
    void setNom(std::string);
    void setPrenom(std::string);
    std::string toString();


private:
        std::string nom;
        std::string prenom;
        std::string numEmp;
        std::string mdp;

signals:

};

#endif // USER_H
