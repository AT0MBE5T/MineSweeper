#ifndef MAINAREA_H
#define MAINAREA_H

#include <QMainWindow>

#include <QTextStream>
#include <QFile>
#include <language.h>
#include <createfield.h>
#include <rules.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainArea;
}
QT_END_NAMESPACE

class MainArea : public QMainWindow
{
    Q_OBJECT

public:
    MainArea(QWidget *parent = nullptr);
    ~MainArea();

private slots:
    void langPicked(int _id);
    void rulesClicked();
    void playClicked();
    void setStyles();

private:
    void setLanguage(QVector<QString>* _currentLang);
    void setText();
    void setConnects();
    void setDefaultWindow();

    Ui::MainArea *ui;
    QVector<QString>* currentLang;
    Rules* rules;
    CreateField* creating;
};
#endif // MAINAREA_H
