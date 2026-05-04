#ifndef CTIME_H
#define CTIME_H

#include <iostream>
using namespace std;

class CTime {
private:
    int h, m, s;
    void normalize();

public:
    CTime(int hh = 0, int mm = 0, int ss = 0);

    CTime operator+(int sec);
    CTime operator-(int sec);

    CTime& operator++();
    CTime operator++(int);

    CTime& operator--();
    CTime operator--(int);

    friend istream& operator>>(istream& in, CTime& t);
    friend ostream& operator<<(ostream& out, const CTime& t);
};

#endif
