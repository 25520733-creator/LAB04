#include "CMatrix.h"
#include <iomanip>
#include <iostream>

using namespace std;

CMatrix::CMatrix(int r, int c) : m(r), n(c) {
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            a[i][j] = 0;
}



CMatrix CMatrix::operator*(const CMatrix &other) const {
    if (this->n != other.m) {
        cout << "Loi: So cot ma tran truoc phai bang so hang ma tran sau!" << endl;
        return CMatrix(0, 0);
    }

    CMatrix kq(this->m, other.n);
    for (int i = 0; i < this->m; i++) {
        for (int j = 0; j < other.n; j++) {
            for (int k = 0; k < this->n; k++) {
                kq.a[i][j] += this->a[i][k] * other.a[k][j];
            }
        }
    }
    return kq;
}

istream& operator>>(istream &in, CMatrix &mat) {
    cout << "Nhap so hang m: "; in >> mat.m;
    cout << "Nhap so cot n: ";  in >> mat.n;
    if ((mat.m==1&&mat.n!=0)||(mat.m!=0&&mat.n==1))
    {
        cout<<"day la mot vector\n";
        cout<<"nhap toa do vector: ";
    }
    for (int i = 0; i < mat.m; i++) {
        for (int j = 0; j < mat.n; j++) {
            in >> mat.a[i][j];
        }
    }
    return in;
}

ostream& operator<<(ostream &out, const CMatrix &mat) {
    if (mat.m == 0 || mat.n == 0) {
        out << "Ma tran rong!";
        return out;
    }
    for (int i = 0; i < mat.m; i++) {
        for (int j = 0; j < mat.n; j++) {
            out<< mat.a[i][j]<<" ";
        }
        out << endl;
    }
    return out;
}
