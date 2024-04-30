#ifndef CREATEFIELD_H
#define CREATEFIELD_H

#include <QDialog>
#include <language.h>
#include <QIntValidator>
#include <QMessageBox>
#include <gamearea.h>
#include <QScreen>

class MainArea;

namespace Ui {
class CreateField;
}

class CreateField : public QDialog
{
    Q_OBJECT
public:
    explicit CreateField(QWidget *parent = nullptr);
    void setLang(QVector<QString>* _lang);
    void setText();
    void setDefaultSettings();
    void setMainAreaPointer(MainArea* _mainArea);
    ~CreateField();

private slots:
    void selectDefaultSizes(int _index);

    void createButtonClicked();
private:
    void clearInputs();
    void setStateByCreateNew(bool _isCreateNew);
    void setValidators();
    void setStyles();
    void setConnects();
    bool checkInputs(int _rows, int _cols, int _mines);
    void fillInputs(const QString& _width, const QString& _height, const QString& _mines);
    bool readField(int& _rows, int& _cols, int& _mines);

    Ui::CreateField *ui;
    QVector<QString>* lang;
    QIntValidator* validator;
    bool isCreateNew;
    GameArea* gameArea;
    MainArea* mainArea;
    const int minSize = 8;
    int maxRows;
    int maxCols;
    const double maxMinesRatio = 0.25;
    const double minMinesRatio = 0.1;
};

#endif // CREATEFIELD_H
