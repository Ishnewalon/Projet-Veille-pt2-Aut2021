#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>
#include <string>
#include <QDebug>

class Login : public QObject
{
    Q_OBJECT

public:
    explicit Login(QObject *parent = nullptr);
    Q_PROPERTY(QString empId READ empId WRITE setEmpId NOTIFY empIdChanged)
    Q_PROPERTY(QString mdp READ mdp WRITE setMdp NOTIFY mdpChanged)


       Q_INVOKABLE void printTest() {
           qDebug()<< m_empId << m_mdp;
       }

       void setEmpId(QString empId) {
           m_empId = empId.toStdString();
           emit empIdChanged(empId.toStdString());
       }

       std::string empId() const {
           return m_empId;
       }

       void setMdp(QString mdp) {
           m_mdp = mdp.toStdString();
           emit mdpChanged(mdp.toStdString());
       }

       std::string mdp() const {
           return m_mdp;
       }
   private:
       std::string m_empId;
       std::string m_mdp;


signals:
       void empIdChanged(std::string);
       void mdpChanged(std::string);

public slots:
    void callMe();

};

#endif // LOGIN_H
