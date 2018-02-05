#ifndef COUNTRY_H
#define COUNTRY_H

#include <QString>

struct Country {
    QString name;
    QString capital;

    Country(const QString& name, const QString& capital) :
        name(name),
        capital(capital)
    {}
};

#endif // COUNTRY_H
