#ifndef CDATE_H
#define CDATE_H
#include<iostream>
using namespace std;

class CDate
{
private:
    int d,m,y;
    void chuanhoa();
public:
    CDate(int dd=0, int mm=0, int yy=0);
    CDate operator+(int ngay) const;
    CDate operator-(int ngay) const;
    CDate& operator++();
    CDate operator++(int);
    CDate& operator--();
    CDate operator--(int);
    friend istream& operator>>(istream& in, CDate& k);
    friend ostream& operator<<(ostream& out, const CDate& k);
    long toDays() const;
    long operator-(const CDate& k) const;
    ~CDate();
};

#endif // CDATE_H
