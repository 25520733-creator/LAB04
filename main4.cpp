#include <iostream>
#include"CDate.h"
using namespace std;
void giaiBaiToanLaiSuat() {
    CDate ngayGui, ngayRut;
    double soTien, laiSuatNam;

    cout << "\n--- TINH LAI SUAT NGAN HANG ---" << endl;
    cout << "Nhap ngay gui (dd mm yyyy): "; cin >> ngayGui;
    cout << "Nhap ngay rut (dd mm yyyy): "; cin >> ngayRut;
    cout << "Nhap so tien gui (VND): "; cin >> soTien;
    cout << "Nhap lai suat nam (%): "; cin >> laiSuatNam;

    long soNgay = ngayRut - ngayGui;
    if (soNgay <= 0) {
        cout << "Ngay rut phải sau ngay gui!" << endl;
    } else {
        double lai = soTien * (laiSuatNam / 100 / 365) * soNgay;
        cout << "Khoang cach: " << soNgay << " ngay." << endl;
        cout << "Tien lai nhan duoc: " << (long)lai << " VND" << endl;
    }
}
int main()
{
    CDate a;
    cout<<"nhap ngay thang nam: ";
    cin>>a;
    cout<<"\nnhap so ngay can thay doi: ";
    int k;
    cin>>k;
    cout<<"sau khi cong them "<<k<<" ngay: "<<a+k;
    cout<<"\nsau khi tru di "<<k<<" ngay: "<<a-k;
    cout << "\nPostfix a++ (in ra gia tri cu): " << a++ << endl;
    cout << "Sau khi Postfix, gia tri hien tai: " << a << endl;
    cout << "Prefix ++a (tang roi in gia tri moi): " << ++a << endl;

      cout << "Postfix a-- (in ra gia tri cu): " << a-- << endl;
    cout << "Sau khi Postfix, gia tri hien tai: " << a << endl;
    cout << "Prefix --a (tang roi in gia tri moi): " << --a << endl;
    giaiBaiToanLaiSuat();
    return 0;
}
