#include "language.h"

Language::Language() {}
QVector<QString> Language::ukrLang;
QVector<QString> Language::engLang;
QMap<QString, int> Language::indexes;

void Language::readLangs()
{
    QFile file(":/lang/localization/ukr.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream text(&file);
        while(!text.atEnd())
            ukrLang.push_back(text.readLine());
    }
    file.close();

    file.setFileName(":/lang/localization/eng.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream text(&file);
        while(!text.atEnd())
            engLang.push_back(text.readLine());
    }
    file.close();
}

void Language::setIndexes()
{
    indexes.insert("NoText",0);
    indexes.insert("uaLang",1);
    indexes.insert("engLang",2);
    indexes.insert("playButton",3);
    indexes.insert("rulesText",4);
    indexes.insert("goalGameRule",5);
    indexes.insert("playingFieldRule",6);
    indexes.insert("startGameRule",7);
    indexes.insert("playerMovesRule",8);
    indexes.insert("openCellRule",9);
    indexes.insert("noMineCellRule",10);
    indexes.insert("mineCellRule",11);
    indexes.insert("openFreeCellsRule",12);
    indexes.insert("flagRule",13);
    indexes.insert("winLoseRule",14);
    indexes.insert("winRule",15);
    indexes.insert("loseRule",16);
    indexes.insert("howToCreateFieldLabel",17);
    indexes.insert("readFileChoice",18);
    indexes.insert("generateChoice",19);
    indexes.insert("sizeFieldInput",20);
    indexes.insert("amountMinesInput",21);
    indexes.insert("createButton",22);
    indexes.insert("readButton",23);
    indexes.insert("selectStandartSize",24);
    indexes.insert("wrongSize",25);
    indexes.insert("wrongMines",26);
    indexes.insert("fieldCreated",27);
    indexes.insert("mineSweeper",28);
    indexes.insert("exit",29);
    indexes.insert("save",30);
    indexes.insert("win",31);
    indexes.insert("lose",32);
    indexes.insert("wannaSaveQuestion",33);
    indexes.insert("exitNoSave",34);
    indexes.insert("backToMenu",35);
    indexes.insert("cancel",36);
    indexes.insert("firstMoveFlag",37);
    indexes.insert("createNoSave",38);
    indexes.insert("successSave",39);
    indexes.insert("readingError",40);
}

int Language::getIndex(const QString &_name)
{
    return indexes[indexes.contains(_name) ? _name : "NoText"];
}

QVector<QString>& Language::getUkrLanguage()
{
    return ukrLang;
}

QVector<QString>& Language::getEngLanguage()
{
    return engLang;
}
