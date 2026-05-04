#include "CTime.h"

int main() {
    CTime t;

    cout << "Nhap thoi gian (h m s): ";
    cin >> t;

    cout << "Thoi gian: " << t << endl;

    cout<<"nhap thoi gian can thay doi: ";
    int a;
    cin>>a;
    cout<<"thoi gian sau khi cong them "<<a<<" giay la: "<<t+a<<endl;
    cout<<"thoi gian sau khi tru them "<<a<<" giay la: "<<t-a<<endl;

    cout << "t ban dau: " << t << endl;

cout << "++t: " << ++t << endl;   // prefix
cout << "t sau ++t: " << t << endl;

cout << "t++: " << t++ << endl;   // postfix
cout << "t sau t++: " << t << endl;

cout << "--t: " << --t << endl;
cout << "t sau --t: " << t << endl;

cout << "t--: " << t-- << endl;
cout << "t sau t--: " << t << endl;

    return 0;
}
