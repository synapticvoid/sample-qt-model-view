#include "CountryModel.h"

#include <QIcon>

CountryModel::CountryModel(QObject* parent) :
    QAbstractListModel(parent),
    countries()
{
    countries
              << new Country("France", "Paris", ":/flags/fr.png")
              << new Country("Great Britain", "London", ":/flags/gb.png")
              << new Country("Japan", "Tokyo", ":/flags/jp.png")
              << new Country("United States of America", "Washington, D.C", ":/flags/us.png");
}

CountryModel::~CountryModel()
{
    qDeleteAll(countries);
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

    case Qt::DecorationRole:
        return QIcon(country.flagIcon);

    case CountryRoles::CapitalRole:
        return country.capital;

    default:
        return QVariant();
        break;
    }
}
