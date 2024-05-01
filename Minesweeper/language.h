#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <QVector>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMap>
#include <QDebug>

class Language
{
public:
    Language();
    static void readLangs();
    static void setIndexes();
    static int getIndex(const QString& _name);
    static QVector<QString>& getUkrLanguage();
    static QVector<QString>& getEngLanguage();
private:
    static QVector<QString> ukrLang;
    static QVector<QString> engLang;
    static QMap<QString, int> indexes;
};

#endif // LANGUAGE_H
