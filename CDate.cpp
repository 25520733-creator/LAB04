#include "CDate.h"
using namespace std;

bool namnhuan(int y)
{
    return (y%400==0||(y%4==0&&y%100!=0));
}
int songaytrongthang(int m, int y)
{
    switch(m)
    {
    case 1: case 3: case 5: case 7: case 8:case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2: return namnhuan(y)?29:28;
    }
    return 30;
}

CDate::CDate(int dd, int mm, int yy)
{
    d=dd;
    m=mm;
    y=yy;
    chuanhoa();
}
void CDate:: chuanhoa()
{
    while (d>songaytrongthang(m,y))
    {
        d-=songaytrongthang(m,y);
        m++;
        if (m>12)
        {
            m=1;
            y++;
        }
    }
    while (d<=0)
    {
        m--;
        if (m<=0)
        {
            m=12;
            y--;
        }
        d+=songaytrongthang(m,y);
    }
}
CDate CDate:: operator+(int ngay) const
{
    return CDate(d+ngay,m,y);
}
CDate CDate:: operator-(int ngay) const
{
    return CDate(d-ngay,m,y);

}
CDate& CDate:: operator++()
{
    d++;
    chuanhoa();
    return *this;
}
CDate CDate:: operator++(int)
{
    CDate tam=*this;
    ++(*this);
    return tam;
}
CDate& CDate:: operator--()
{
    d--;
    chuanhoa();
    return *this;
}
CDate CDate:: operator--(int)
{
  CDate tam=*this;
    --(*this);
    return tam;
}
istream& operator>>(istream& in, CDate& k)
{
    in>>k.d>>k.m>>k.y;
    k.chuanhoa();
    return in;
}
ostream& operator<<(ostream& out, const CDate& k)
{
    out<<k.d<<"/"<<k.m<<"/"<<k.y;
    return out;
}
long CDate::toDays() const {
    long total = d;
    for (int i = 1; i < y; i++) total += (namnhuan(i) ? 366 : 365);
    for (int i = 1; i < m; i++) total += songaytrongthang(i, y);
    return total;
}

// Tinh khoang cach giua 2 ngay
long CDate::operator-(const CDate& k) const {
    return this->toDays() - k.toDays();
}

CDate::~CDate()
{
    //dtor
}
