#ifndef GAMEAREA_H
#define GAMEAREA_H

#include <QWidget>
#include <language.h>
#include <field.h>
#include <QPushButton>
#include <QTimer>
#include <stylehandler.h>
#include <times.h>
#include <QMessageBox>

class MainArea;

namespace Ui {
class GameArea;
}

class GameArea : public QWidget
{
    Q_OBJECT

public:
    explicit GameArea(QWidget *parent = nullptr);
    void setLang(QVector<QString>* _lang);
    void setReadField(const Field& _field);
    void spawnField();
    void setFieldParams(int _rows, int _cols, int _mines);
    void setDefaultSettings();
    void setMainAreaPointer(MainArea* _mainArea);
    Field readMatrixFromFile();
    ~GameArea();

private slots:
    void cellClick();
    void switcherClick();
    void updateTime();
    void smileClick();
    void saveClick();
    void backToMenuClick();

private:
    void setCounters();
    void setConnects();
    void loseByMine();
    bool winCondition();
    void win();
    void stopField();
    void defaultButtonsArray();
    void setDefaultVariables();
    void flagAction(int _x, int _y, QPushButton* _btn);
    void openAction(int _x, int _y);
    QVector<QVector<Cell>> generateMatrix(int _rows, int _cols, int _mines);
    void openReadCells();
    void setSmileState(bool _isLose);
    void firstMove(int _x, int _y);
    void setStyles();
    void clearField();
    QSizePolicy getButtonPolicy();
    QPalette getPaletteForLCDNumber();
    Field createField(int _rows, int _cols, int _mines, int xStart, int yStart);
    void setText();
    void centerWindow(const QPoint& _point=QPoint());
    void buttonSettings(QPushButton* _btn);
    QMessageBox* getThreeButtonWindow(const QString& _text, const QString& _btnNameFirst, const QString& _btnNameSecond, const QString& _btnNameThird);
    QVector<Cell> getRow(const QStringList& _rowString, int _currentRow, int _cols, int& _mines);
    Cell getCell(const QString& _cellString, int _currentRow, int _currentCol, int& _mines);
    void setSmileEnable(bool _isEnable);
    Cell getBuildMineCell(QChar _flag, QChar _open);
    Cell getBuildOpenCell(QChar _adjacentMines, QChar _flag, QChar _open);
    bool checkString(const QString& _str, int freeCellStringIndexSize, int bombStringIndexSize);

    Ui::GameArea *ui;
    QVector<QString>* lang;
    Field field;
    QVector<QVector<QPushButton*>> buttons;
    MainArea* mainArea;
    QTimer* LCDtimer;
    bool isFlag;
    bool isStartTimer;
    int timeElapsed;
    int availableFlags;
    bool isGameEnded;
    bool isFirstMove;
    bool isRead;
    bool isSaved;
    bool isSmileActive;
    int rows;
    int cols;
    int mines;
    void setSaved(bool _isSaved);
    const int buttonSize = 50;
};

#endif // GAMEAREA_H
