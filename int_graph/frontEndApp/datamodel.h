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
    explicit DataModel(std::list<menuItem> &dataList, QObject *parent = 0);

    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    std::vector<menuItem> dataVector;
};

#endif // DATAMODEL_H
