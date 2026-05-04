#include <iostream>
#include "CVector.h"

using namespace std;

int main() {
    CVector v1, v2;

    cout << "Nhap Vector V1:" << endl;
    cin >> v1;
    cout << "Nhap Vector V2:" << endl;
    cin >> v2;

    cout << "\nV1 = " << v1;
    cout << "\nV2 = " << v2;

    cout << "\n\nTong V1 + V2 = " << v1 + v2;
    cout << "\nHieu V1 - V2 = " << v1 - v2;
    cout << "\nTich vo huong V1 * V2 = " << v1 * v2;

    cout << "\nDo dai V1: " << v1.doDai() << endl;

    return 0;
}
