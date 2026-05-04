#ifndef PHANSO_H
#define PHANSO_H
#include<iostream>
using namespace std;
class Phanso
{
  private:
      int tuso, mauso;
      void rutgon();
  public:
      Phanso();
      Phanso (int t,int m);
      Phanso operator+(const Phanso& tam) const;
      Phanso operator-(const Phanso& tam) const;
      Phanso operator*(const Phanso& tam) const;
      Phanso operator/(const Phanso& tam)const;
      bool operator ==(const Phanso& tam)const ;
      bool operator <(const Phanso& tam)const ;
      bool operator >(const Phanso& tam)const ;
      friend istream& operator>>(istream& in, Phanso& p);
      friend ostream& operator<<(ostream& out,const Phanso& p);
      ~Phanso();
};

#endif
