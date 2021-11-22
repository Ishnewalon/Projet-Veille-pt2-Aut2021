#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <QAbstractListModel>
#include "menuitem.h"
#include <list>
#include <vector>
#include <string>

class DataModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum Roles {
        NameRole = Qt::UserRole,
        PriceRole,
        MenuNameRole
    };

    DataModel();
    explicit DataModel(std::list<menuItem> &dataList, QObject *parent = 0);

    Q_INVOKABLE void setDataVector(std::list<menuItem> &dataList);
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QHash<int, QByteArray> roleNames() const override;
private:
    std::vector<menuItem> dataVector;
};

#endif // DATAMODEL_H
