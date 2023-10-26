#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(struct SinhVien A[], int n) {
        return;
}

void Xuat(struct SinhVien A[], int n) {
	string m;
	getline(cin, m);
        for (int i = 0; i < stoi(m); i++) {
        	string ID, HT, NS, GT;
        	string T, L, H, TB;
		float t, l, h, tb;
        	getline(cin, ID);
        	getline(cin, HT);
        	getline(cin, NS);
        	getline(cin, GT);
        	getline(cin, T);
        	getline(cin, L);
        	getline(cin, H);
		t = stof(T);
		l = stof(L);
		h = stof(H);
		tb = (t+l+h)/3;
        	cout << ID << "\t" << HT << "\t" << NS << "\t" << GT << "\t";
        	cout << setprecision(3) << t << "\t" << l <<  "\t" << h << "\t" << tb << endl;
	}
}

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
