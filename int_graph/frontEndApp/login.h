#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>
#include <string>

class Login : public QObject
{
    Q_OBJECT
    Q_PROPERTY(std::string empId READ empId WRITE setEmpId NOTIFY empIdChanged)
    Q_PROPERTY(std::string mdp READ mdp WRITE setMdp NOTIFY mdpChanged)
public:
    explicit Login(QObject *parent = nullptr);

    void setEmpId(std::string empId) {
        m_empId = empId;
        emit empIdChanged(empId);
    }
    std::string empId() const {
        return m_empId;
    }
    void setMdp(std::string mdp) {
        m_mdp = mdp;
        emit mdpChanged(mdp);
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
