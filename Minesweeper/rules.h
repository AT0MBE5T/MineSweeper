#ifndef RULES_H
#define RULES_H

#include <QDialog>
#include <language.h>
#include <stylehandler.h>

namespace Ui {
class Rules;
}

class Rules : public QDialog
{
    Q_OBJECT

public:
    explicit Rules(QWidget *parent = nullptr);
    void setLanguage(QVector<QString>* _lang);
    void setText();
    ~Rules();

private:
    void setStyles();

    Ui::Rules *ui;
    QVector<QString>* lang;
    const int rulesStart = 6;
    const int rulesEnd = 16;
};

#endif // RULES_H
