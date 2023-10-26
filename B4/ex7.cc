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
void SapXepGiamTheoMASV(struct SinhVien A[], int n) {
	return;
}

void Nhap(struct SinhVien A[], int n) {
        return;
}

void Xuat(struct SinhVien A[], int n) {
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
	int rc = -1;
	int it = 0;
	for (int i = 0; i < i_m; i++) {
		for (int j = 0; j < i_m; j++) {
			if (stoll(SV[j].ID) > rc) {
				rc = stoll(SV[j].ID);
				it = j;
			}
		}
        	cout << SV[it].ID << "\t" << SV[it].HT << "\t" << SV[it].NS << "\t" << SV[it].GT << "\t";
		float t, l , h, tb;
		t = stof(SV[it].T);
		l = stof(SV[it].L);
		h = stof(SV[it].H);
		tb = (t+l+h)/3;
        	cout << setprecision(3) << t << "\t" << l <<  "\t" << h << "\t" << tb << endl;
		SV[it].ID = "-1";
		rc = -1;
	}
}


int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}
