#ifndef CMATRIX_H
#define CMATRIX_H

#include <iostream>
#include "CVector.h"
class CMatrix {
private:
    int m, n;
    double a[100][100];

public:
    CMatrix(int rows = 0, int cols = 0);

    CMatrix operator*(const CMatrix &other) const;

    friend std::istream& operator>>(std::istream &in, CMatrix &mat);
    friend std::ostream& operator<<(std::ostream &out, const CMatrix &mat);
};

#endif
