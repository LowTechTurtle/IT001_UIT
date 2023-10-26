#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

typedef struct SinhVien2 {
	string ID;
	string HT;
	string NS;
	string GT;
	string T;
	string L;
	string H;
} SinhVien2;


void Nhap(struct SinhVien A[], int n) {
        return;
}

void Nhap(char hoTenCanXoa[]) {
	return;
}

void XoaTheoHoTen(struct SinhVien A[], int n, char hoTenCanXoa[]) {
	return;
}

void Xuat(struct SinhVien A[], int n) {
	string black_list;
	getline(cin, black_list);
	string m;
	getline(cin, m);
	int i_m = stoi(m);
	struct SinhVien2 SV[i_m];
        for (int i = 0; i < i_m; i++) {
        	getline(cin, SV[i].ID);
        	getline(cin, SV[i].HT);
        	getline(cin, SV[i].NS);
        	getline(cin, SV[i].GT);
        	getline(cin, SV[i].T);
        	getline(cin, SV[i].L);
        	getline(cin, SV[i].H);
	}
	for (int i = 0; i < i_m; i++) {
		if (SV[i].HT == black_list)
			continue;
        	cout << SV[i].ID << "\t" << SV[i].HT << "\t" << SV[i].NS << "\t" << SV[i].GT << "\t";
		float t, l , h, tb;
		t = stof(SV[i].T);
		l = stof(SV[i].L);
		h = stof(SV[i].H);
		tb = (t+l+h)/3;
        	cout << setprecision(3) << t << "\t" << l <<  "\t" << h << "\t" << tb << endl;
	}
}

int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}
