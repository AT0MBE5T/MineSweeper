#include "times.h"

int Times::getSeconds() const
{
    return seconds;
}

int Times::getMinutes() const
{
    return minutes;
}

int Times::getHours() const
{
    return hours;
}

Times::Times(int _hr, int _min, int _sec) : hours(_hr), minutes(_min), seconds(_sec) {}

Times Times::getTime(int _milliseconds)
{
    return Times(_milliseconds / 3600, (_milliseconds % 3600) / 60, _milliseconds % 60);
}
