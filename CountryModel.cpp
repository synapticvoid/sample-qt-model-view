#include "CountryModel.h"

#include <QFile>

CountryModel::CountryModel(QObject* parent) :
    QAbstractListModel(parent),
    countries()
{
    countries << new Country("France", "Paris")
              << new Country("UK", "London");
}

int CountryModel::rowCount(const QModelIndex& parent) const
{
    Q_UNUSED(parent)
    return countries.size();
}

QVariant CountryModel::data(const QModelIndex& index, int role) const
{
    const Country& country = *countries.at(index.row());

    switch (role) {
    case Qt::DisplayRole:
        return country.name;

    default:
        return QVariant();
        break;
    }
}
