#ifndef SOPHUC_H
#define SOPHUC_H

#include <iostream>
using namespace std;
class SoPhuc {
private:
    double thuc, ao;

public:
    // Constructor duy nhất: cho phép khởi tạo từ 0, 1 hoặc 2 tham số
    // Nếu chỉ truyền 1 tham số, 'ao' sẽ mặc định là 0 (số thực)
    SoPhuc(double r = 0, double i = 0);

    SoPhuc operator+(const SoPhuc& other) const;
    SoPhuc operator-(const SoPhuc& other) const;
    SoPhuc operator*(const SoPhuc& other) const;
    SoPhuc operator/(const SoPhuc& other) const;

    bool operator==(const SoPhuc& other) const;
    bool operator!=(const SoPhuc& other) const;

    friend ostream& operator<<(ostream& os, const SoPhuc& sp);
    friend istream& operator>>(istream& is, SoPhuc& sp);
};

#endif
