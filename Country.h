#ifndef COUNTRY_H
#define COUNTRY_H

#include <QString>

struct Country {
    QString name;
    QString capital;
    QString flagIcon;

    Country(const QString& name, const QString& capital, const QString& flagIcon) :
        name(name),
        capital(capital),
        flagIcon(flagIcon)
    {}
};

#endif // COUNTRY_H
