#include "CVector.h"
#include <iostream>
#include <cmath>

using namespace std;

CVector::CVector(int d) {
    n = d;
    v = (n > 0) ? new double[n] : nullptr;
    for (int i = 0; i < n; i++) v[i] = 0;
}

CVector::CVector(const CVector &cv) {
    n = cv.n;
    v = new double[n];
    for (int i = 0; i < n; i++) v[i] = cv.v[i];
}

CVector::~CVector() {
    delete[] v;
}

CVector& CVector::operator=(const CVector &cv) {
    if (this != &cv) {
        delete[] v;
        n = cv.n;
        v = new double[n];
        for (int i = 0; i < n; i++) v[i] = cv.v[i];
    }
    return *this;
}

CVector CVector::operator+(const CVector &cv) const {
    if (n != cv.n) return CVector(0); // Trả về vector rỗng nếu lệch số chiều
    CVector kq(n);
    for (int i = 0; i < n; i++) kq.v[i] = v[i] + cv.v[i];
    return kq;
}

CVector CVector::operator-(const CVector &cv) const {
    if (n != cv.n) return CVector(0);
    CVector kq(n);
    for (int i = 0; i < n; i++) kq.v[i] = v[i] - cv.v[i];
    return kq;
}

// Tích vô hướng: a.b = a1b1 + a2b2 + ... + anbn
double CVector::operator*(const CVector &cv) const {
    double dot = 0;
    int minN = (n < cv.n) ? n : cv.n;
    for (int i = 0; i < minN; i++) dot += v[i] * cv.v[i];
    return dot;
}

double CVector::doDai() const {
    double sum = 0;
    for (int i = 0; i < n; i++) sum += v[i] * v[i];
    return sqrt(sum);
}

istream& operator>>(istream &in, CVector &cv) {
    cout << "Nhap so chieu n: ";
    in >> cv.n;
    delete[] cv.v;
    cv.v = new double[cv.n];
    for (int i = 0; i < cv.n; i++) {
        cout << "Thanh phan [" << i + 1 << "]: ";
        in >> cv.v[i];
    }
    return in;
}

ostream& operator<<(ostream &out, const CVector &cv) {
    out << "(";
    for (int i = 0; i < cv.n; i++) {
        out << cv.v[i] << (i == cv.n - 1 ? "" : ", ");
    }
    out << ")";
    return out;
}
