#include <iostream>
#include "DaThuc.h"

using namespace std;

int main() {
    Dathuc p1, p2;

    cout << "--- Nhap da thuc P1 ---" << endl;
    cin >> p1;

    cout << "--- Nhap da thuc P2 ---" << endl;
    cin >> p2;

    cout << "\nP1 = " << p1 << endl;
    cout << "P2 = " << p2 << endl;

    cout << "Tong = " << p1+p2 << endl;

    cout << "Tich = " << p1*p2 << endl;

    double x;
    cout << "\nNhap x de tinh P1(x): ";
    cin >> x;
    cout << "Gia tri P1(" << x << ") = " << p1.tinhgiatri(x) << endl;

    return 0;
}
