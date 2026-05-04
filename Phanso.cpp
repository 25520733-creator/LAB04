#include "Phanso.h"
#include<bits/stdc++.h>
using namespace std;
void Phanso::rutgon()
{
    int a=abs(tuso),b=abs(mauso);
    while (b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    tuso/=a;
    mauso/=a;
    if (mauso<0)
    {
        tuso=-tuso;
        mauso=-mauso;
    }
}
Phanso::Phanso()
{

}
Phanso::Phanso (int t=0,int m=1)
{
    tuso=t;
    mauso=m;
    rutgon();
}
      Phanso Phanso::operator+(const Phanso& tam) const
      {
          return Phanso(tuso*tam.mauso+tam.tuso*mauso,mauso*tam.mauso);
      }
      Phanso Phanso:: operator-(const Phanso& tam) const
      {
          return Phanso(tuso*tam.mauso-tam.tuso*mauso,mauso*tam.mauso);
      }
      Phanso Phanso:: operator*(const Phanso& tam) const
      {
          return Phanso(tuso*tam.tuso, mauso*tam.mauso);
      }
      Phanso Phanso:: operator/(const Phanso& tam)const
      {
          return Phanso(tuso*tam.mauso, mauso*tam.tuso);
      }
      bool Phanso:: operator ==(const Phanso& tam)const
      {
          return tuso*tam.mauso==tam.tuso*mauso;
      }
      bool Phanso:: operator <(const Phanso& tam)const
      {
        return tuso*tam.mauso<tam.tuso*mauso;
      }
      bool Phanso::operator >(const Phanso& tam)const
      {
        return tuso*tam.mauso>tam.tuso*mauso;

      }
       istream& operator>>(istream& in, Phanso& p)
      {
          in>>p.tuso>>p.mauso;
          p.rutgon();
          return in;
      }
       ostream& operator<<(ostream& out,const Phanso& p)
      {
          out<<p.tuso<<"/"<<p.mauso;
          return out;
      }
Phanso::~Phanso()
{
    //dtor
}
