#ifndef CELL_H
#define CELL_H
#include <coordinate.h>
#include <QString>
#include <QPushButton>

class Cell
{
public:
    Cell();
    int getAdjacentMines() const;
    bool getMine() const;
    Coordinate getLocation() const;
    void setAdjacentMines(int _minesAround);
    void setMine(bool _isMine);
    void setLocation(Coordinate _cord);
    bool openCell(QPushButton* _btn);
    bool operator != (const Cell& _cell);
    bool getFlag() const;
    void setFlag(bool _isFlag);
    bool getOpen() const;
    void setOpen(bool _isOpen);
private:
    void setStyle(QPushButton* _btn, const QPixmap& _style);

    bool isMine;
    bool isFlag;
    int adjacentMines;
    bool isOpen;
    Coordinate location;
};

#endif // CELL_H
