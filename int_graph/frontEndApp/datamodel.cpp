#include "datamodel.h"

DataModel::DataModel() : QAbstractListModel(nullptr){}

DataModel::DataModel(std::list<menuItem> &dataList, QObject *parent)
    : QAbstractListModel(parent), dataVector {dataList.begin(), dataList.end()}
{
}

void DataModel::setDataVector(std::list<menuItem> &dataList) {
    for (menuItem &item : dataList) {
        dataVector.push_back(item);
    }
}

int DataModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid()) {
        return 0;
    }
    return dataVector.size();
}

QVariant DataModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid()) {
        return QVariant();
    }

    menuItem d = dataVector.at(index.row());
    if (role == NameRole) {
        return QString::fromStdString(d.getNom());
    }
    else if (role == PriceRole) {
        return QString::fromStdString(d.getPrix());
    }
    else if (role == MenuNameRole) {
        return QString::fromStdString(d.getNomMenu());
    }
    return QVariant();
}

QHash<int, QByteArray> DataModel::roleNames() const {
    static QHash<int, QByteArray> mapping {
        {NameRole, "name"},
        {PriceRole, "price"},
        {MenuNameRole, "menuName"}
    };
    return mapping;
}
