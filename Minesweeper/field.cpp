#include "field.h"
#include <QStack>

Field::Field(){}

Field::Field(int _rows, int _cols, int _minesAmount, QVector<QVector<Cell>> _matrix) : rows(_rows), cols(_cols), minesAmount(_minesAmount), matrix(_matrix) {}

bool Field::setDefaultCellStyles(QVector<QVector<QPushButton*>> _buttons)
{
    static QIcon emptyIcon;
    for(auto &i:_buttons){
        for(auto&j:i){
            j->setStyleSheet(StyleHandler::getDefaultCellStyle());
            j->setIcon(emptyIcon);
        }
    }
    return bool();
}

bool Field::fillFieldWithNumbers()
{
    for(int i = 0; i < matrix.size(); ++i){
        for(int j = 0; j < matrix[i].size(); ++j){
            if(!matrix[i][j].getMine()){
                matrix[i][j].setAdjacentMines(getMinesAround(matrix[i][j]));

            }
        }
    }
    return true;
}

void Field::crossZeros(QVector<QVector<QPushButton*>> _buttons, Cell& _cell)
{
    QStack<Cell> stack;
    stack.push(_cell);

    while (!stack.isEmpty()) {
        Cell cell = stack.pop();
        int x = cell.getLocation().x;
        int y = cell.getLocation().y;

        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                int newX = x + i;
                int newY = y + j;

                if ((!i && !j) || !isValid(newX, newY))
                    continue;

                if (!matrix[newX][newY].getOpen()) {
                    matrix[newX][newY].openCell(_buttons[newX][newY]);
                    if (!matrix[newX][newY].getAdjacentMines())
                        stack.push(matrix[newX][newY]);
                }
            }
        }
    }
}

bool Field::isValid(const int x, const int y) const
{
    return (x >= 0 && x < matrix.size() && y >= 0 && y < matrix[0].size());
}

void Field::showAllField(QVector<QVector<QPushButton*>> _buttons)
{
    for(int i = 0; i < matrix.size(); ++i)
        for(int j = 0; j < matrix[i].size(); ++j)
            if(!matrix[i][j].getOpen())
                matrix[i][j].openCell(_buttons[i][j]);
}

void Field::openCell(Cell& _cell, QVector<QVector<QPushButton *>> _buttons)
{
    if(!_cell.getAdjacentMines())
        crossZeros(_buttons, _cell);
    _cell.openCell(_buttons[_cell.getLocation().x][_cell.getLocation().y]);
}

int Field::getMinesAround(Cell _cell) const
{
    int x = _cell.getLocation().x;
    int y = _cell.getLocation().y;
    int count = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int newX = x + i;
            int newY = y + j;
            if ((i || j) && isValid(newX, newY) && matrix[newX][newY].getMine()) {
                count++;
            }
        }
    }

    if(matrix[x][y].getMine())count--;

    return count;

}

int Field::getRows()const
{
    return rows;
}

int Field::getCols()const
{
    return cols;
}

int Field::getMines()const
{
    return minesAmount;
}

void Field::setMatrix(QVector<QVector<Cell> > _matrix)
{
    matrix = _matrix;
}

QVector<QVector<Cell>>& Field::getMatrix()
{
    return matrix;
}
