#ifndef DATHUC_H
#define DATHUC_H
#include<iostream>
using namespace std;

class Dathuc
{
private:
    int n;
    double *a;
public:
    Dathuc(int n=0);
    Dathuc(const Dathuc &dt);
    double tinhgiatri(double x)const;
    Dathuc operator+(const Dathuc &dt)const;
    Dathuc operator-(const Dathuc &dt) const;
    Dathuc operator *(const Dathuc &dt) const;
    friend istream& operator>>(istream &in, Dathuc &dt);
    friend ostream& operator<<(ostream &out,const Dathuc &dt);
    ~Dathuc();
};

#endif // DATHUC_H
