#include "SoPhuc.h"
using namespace std;
SoPhuc::SoPhuc(double r, double i) : thuc(r), ao(i) {}

SoPhuc SoPhuc::operator+(const SoPhuc& other) const {
    return SoPhuc(thuc + other.thuc, ao + other.ao);
}

SoPhuc SoPhuc::operator-(const SoPhuc& other) const {
    return SoPhuc(thuc - other.thuc, ao - other.ao);
}

SoPhuc SoPhuc::operator*(const SoPhuc& other) const {
    return SoPhuc(thuc * other.thuc - ao * other.ao, thuc * other.ao + ao * other.thuc);
}

SoPhuc SoPhuc::operator/(const SoPhuc& other) const {
    double mau = other.thuc * other.thuc + other.ao * other.ao;
    return SoPhuc((thuc * other.thuc + ao * other.ao) / mau,
                  (ao * other.thuc - thuc * other.ao) / mau);
}
bool SoPhuc::operator==(const SoPhuc& other) const {
    return (thuc == other.thuc && ao == other.ao);
}
bool SoPhuc::operator!=(const SoPhuc& other) const {
    return !(*this == other);
}

ostream& operator<<(ostream& os, const SoPhuc& sp) {
    os << sp.thuc << (sp.ao >= 0 ? " + " : " - ") << (sp.ao >= 0 ? sp.ao : -sp.ao) << "i";
    return os;
}

istream& operator>>(istream& is, SoPhuc& sp) {
cout << "Nhap phan thuc: "; is >> sp.thuc;
cout << "Nhap phan ao: ";   is >> sp.ao;
    return is;
}
