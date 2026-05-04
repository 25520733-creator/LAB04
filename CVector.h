#ifndef CVECTOR_H
#define CVECTOR_H

#include <iostream>

class CVector {
private:
    int n;          // Số chiều của vector
    double *v;      // Mảng lưu giá trị các thành phần

public:
    CVector(int d = 0);
    CVector(const CVector &cv);             // Copy Constructor
    ~CVector();

    CVector& operator=(const CVector &cv);  // Toán tử gán

    // Các phép toán vector
    CVector operator+(const CVector &cv) const;
    CVector operator-(const CVector &cv) const;
    double operator*(const CVector &cv) const; // Tích vô hướng

    // Nhập xuất
    friend std::istream& operator>>(std::istream &in, CVector &cv);
    friend std::ostream& operator<<(std::ostream &out, const CVector &cv);

    // Tiện ích
    double doDai() const; // Tính độ dài vector (norm)
};

#endif
