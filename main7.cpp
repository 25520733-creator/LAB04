#include <iostream>
#include "CMatrix.h"

using namespace std;

int main() {
    CMatrix A, B;

    cout << "Nhap ma tran A: " << endl;
    cin >> A;

    cout << "Nhap ma tran B: " << endl;
    cin >> B;

    cout << "\nMa tran A:\n" << A;
    cout << "\nMa tran B:\n" << B;

    CMatrix ketQua = A * B;

    cout << "\nKet qua tich:\n" << ketQua;

    return 0;
}
