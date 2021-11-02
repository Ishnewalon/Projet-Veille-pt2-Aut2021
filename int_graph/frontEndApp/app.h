#ifndef APP_H
#define APP_H

#include <QObject>

class app : public QObject
{
    Q_OBJECT
public:
    explicit app(QObject *parent = nullptr);

signals:

};

#endif // APP_H
