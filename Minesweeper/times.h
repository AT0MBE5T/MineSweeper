#ifndef TIMES_H
#define TIMES_H

class Times{
public:
    Times(int _hr, int _min, int _sec);
    static Times getTime(int _milliseconds);
    int getSeconds() const;
    int getMinutes() const;
    int getHours() const;
private:
    int hours, minutes, seconds;
};

#endif // TIMES_H
