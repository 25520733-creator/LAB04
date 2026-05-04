#include "Dathuc.h"
#include<iostream>
using namespace std;

Dathuc::Dathuc(int bac)
{
    n=bac;
    a=new double [n+1];
    for (int i=0;i<=n;i++)a[i]=0;
}
Dathuc::Dathuc(const Dathuc &dt)
{
    n=dt.n;
    a=new double [n+1];
    for (int i=0;i<=n;i++)
    {
        a[i]=dt.a[i];
    }
}
Dathuc::~Dathuc()
{
    delete[]a;
}
double Dathuc::tinhgiatri(double x) const
{
    double f=a[n];
    for (int i=n-1;i>=0;i--)
    {
        f=f*x+a[i];
    }
    return f;
}

Dathuc Dathuc:: operator+(const Dathuc &dt)const
{
    int maxbac=max(n,dt.n);
    Dathuc kq(maxbac);
    for (int i=0;i<=maxbac;i++)
    {
        double h1=(i<=n)?a[i]:0;
        double h2=(i<=dt.n)?dt.a[i]:0;
        kq.a[i]=h1+h2;
    }
    return kq;
}
    Dathuc Dathuc:: operator-(const Dathuc &dt) const
    {
         int maxbac=max(n,dt.n);
    Dathuc kq(maxbac);
    for (int i=0;i<=maxbac;i++)
    {
        double h1=(i<=n)?a[i]:0;
        double h2=(i<=dt.n)?dt.a[i]:0;
        kq.a[i]=h1-h2;
    }
    return kq;
    }
    Dathuc Dathuc:: operator *(const Dathuc &dt) const
    {
        Dathuc kq(n + dt.n);
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= dt.n; j++)
            kq.a[i + j] += a[i] * dt.a[j];
    return kq;
    }
 istream& operator>>(istream &in, Dathuc &dt)
    {
        cout<<"nhap bac cua da thuc: ";
        in>>dt.n;
        delete[]dt.a;
        dt.a=new double[dt.n+1];
        for (int i=dt.n;i>=0;i--)
        {
            in>>dt.a[i];
        }
        return in;
    }
 ostream&  operator<<(ostream &out,const Dathuc &dt)
    {
        bool first = true;
    for (int i = dt.n; i >= 0; i--) {
        if (dt.a[i] != 0) {
            if (!first && dt.a[i] > 0) out << " + ";
            if (dt.a[i] < 0) out << " - ";

            double val = abs(dt.a[i]);
            if (val != 1 || i == 0) out << val;
            if (i > 0) out << "x";
            if (i > 1) out << "^" << i;
            first = false;
        }
    }
    if (first) out << "0";
    return out;
    }
