#include "cell.h"
#include <stylehandler.h>

bool Cell::getFlag() const
{
    return isFlag;
}

void Cell::setFlag(bool _isFlag)
{
    isFlag = _isFlag;
}

bool Cell::getOpen() const
{
    return isOpen;
}

void Cell::setOpen(bool _isOpen)
{
    isOpen = _isOpen;
}

Cell::Cell() : isMine(false), isFlag(false), adjacentMines(-1), isOpen(false), location(Coordinate{-1, -1}) {}

int Cell::getAdjacentMines() const
{
    return adjacentMines;
}

bool Cell::getMine() const
{
    return isMine;
}

Coordinate Cell::getLocation() const
{
    return location;
}

void Cell::setAdjacentMines(int _minesAround)
{
    adjacentMines = _minesAround;
}

void Cell::setMine(bool _isMine)
{
    isMine = _isMine;
}

void Cell::setLocation(Coordinate _cord)
{
    location = _cord;
}

bool Cell::openCell(QPushButton* _btn)
{
    isOpen=true;
    QPixmap style;
    if(isMine){
        setStyle(_btn, StyleHandler::getMineStyle());
        return true;
    }
    switch(adjacentMines){
    case 1:
        style=StyleHandler::getOneMineStyle();
        break;
    case 2:
        style=StyleHandler::getTwoMinesStyle();
        break;
    case 3:
        style=StyleHandler::getThreeMinesStyle();
        break;
    case 4:
        style=StyleHandler::getFourMinesStyle();
        break;
    case 5:
        style=StyleHandler::getFiveMinesStyle();
        break;
    case 6:
        style=StyleHandler::getSixMinesStyle();
        break;
    case 7:
        style=StyleHandler::getSevenMinesStyle();
        break;
    case 8:
        style=StyleHandler::getEightMinesStyle();
        break;
    }
    setStyle(_btn, style);
    return true;
}

void Cell::setStyle(QPushButton* _btn, const QPixmap &_style)
{
    _btn->setStyleSheet(StyleHandler::getZeroMinesStyle());
    _btn->setIcon(QIcon(_style));
    _btn->setIconSize(_btn->size());
}

bool Cell::operator !=(const Cell &_cell)
{
    return location.x != _cell.location.x || location.y != _cell.location.y;
}
