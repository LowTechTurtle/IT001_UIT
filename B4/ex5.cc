#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(struct SinhVien A) {
	return;
}

void Xuat(struct SinhVien A) {
	string ID, HT, NS, GT;
	float T, L, H, TB;
	getline(cin, ID);
	getline(cin, HT);
	getline(cin, NS);
	getline(cin, GT);
	cin >> T >> L >> H;
	TB = (T+L+H)/3;
	
	cout << ID << "\t" << HT << "\t" << NS << "\t" << GT << "\t";
        cout << setprecision(3) << T << "\t" << L << "\t" << "\t" << H << "\t" << TB;
}

int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}

