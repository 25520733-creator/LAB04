#include "CTime.h"

void CTime::normalize() {
    int total = h * 3600 + m * 60 + s;

    if (total < 0) total = 0;

    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;

    h = h % 24;
}

CTime::CTime(int hh, int mm, int ss) {
    h = hh; m = mm; s = ss;
    normalize();
}

CTime CTime::operator+(int sec) {
    CTime temp = *this;
    temp.s += sec;
    temp.normalize();
    return temp;
}

CTime CTime::operator-(int sec) {
    CTime temp = *this;
    temp.s -= sec;
    temp.normalize();
    return temp;
}

CTime& CTime::operator++() {
    s++;
    normalize();
    return *this;
}

CTime CTime::operator++(int) {
    CTime temp = *this;
    s++;
    normalize();
    return temp;
}

CTime& CTime::operator--() {
    s--;
    normalize();
    return *this;
}

CTime CTime::operator--(int) {
    CTime temp = *this;
    s--;
    normalize();
    return temp;
}

istream& operator>>(istream& in, CTime& t) {
    in >> t.h >> t.m >> t.s;
    t.normalize();
    return in;
}

ostream& operator<<(ostream& out, const CTime& t) {
    if (t.h < 10) out << "0";
    out << t.h << ":";
    if (t.m < 10) out << "0";
    out << t.m << ":";
    if (t.s < 10) out << "0";
    out << t.s;
    return out;
}
