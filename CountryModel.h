#ifndef COUNTRYMODEL_H
#define COUNTRYMODEL_H

#include <QAbstractListModel>
#include <QVector>

#include "Country.h"

class CountryModel : public QAbstractListModel
{
    Q_OBJECT
public:

    enum CountryRoles {
        CapitalRole = Qt::UserRole,
    };

    CountryModel(QObject* parent = 0);
    ~CountryModel();

    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    QVariant data(const QModelIndex& index, int role) const override;

private:
    QVector<Country*> countries;

};

#endif // COUNTRYMODEL_H
