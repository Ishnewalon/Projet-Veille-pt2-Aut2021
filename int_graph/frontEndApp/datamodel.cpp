#include "datamodel.h"

DataModel::DataModel(std::list<menuItem> &dataList, QObject *parent)
    : QAbstractListModel(parent), dataVector {dataList.begin(), dataList.end()}
{
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
    (void) role;

    if (!index.isValid()) {
        return QVariant();
    }

    if (index.row() >= rowCount(index)) {
        return QVariant();
    }

    menuItem d = dataVector.at(index.row());

    return QVariant();
}
