    #include <iostream>
    #include "SoPhuc.h"

    using namespace std;

    int main() {
        SoPhuc sp1, sp2;
        double soThucNhapVao;

        cout << "--- Nhap so phuc sp1 ---" << endl;
        cin >> sp1;

        //  nhập một số thực thuần túy để kiểm tra cơ chế ép kiểu
        cout << "\nNhap mot so thuc bat ky (de kiem tra ep kieu): ";
        cin >> soThucNhapVao;

        // chuyển đổi số thực vừa nhập thành số phức thông qua Constructor
        // lúc này sp2 sẽ có phần thực = soThucNhapVao và phần ảo = 0
        sp2 = soThucNhapVao;

        cout << "\n-----------------------" << endl;
        cout << "sp1 = " << sp1 << endl;
        cout << "sp2 (tu so thuc vua nhap) = " << sp2 << endl;

        cout << "\n--- Ket qua phep tinh ---" << endl;
        cout << "Tong (sp1 + sp2): " << (sp1 + sp2) << endl;
        cout << "Hieu (sp1 - sp2): " << (sp1 - sp2) << endl;
        cout << "Tich (sp1 * sp2): " << (sp1 * sp2) << endl;
        cout << "Thuong (sp1 / sp2): " << (sp1 / sp2) << endl;

        cout << "\n--- So sanh ---" << endl;
        if (sp1 == sp2) {
            cout << "sp1 bang sp2" << endl;
        } else if (sp1 != sp2) {
            cout << "sp1 khac sp2" << endl;
        }

        return 0;
    }
