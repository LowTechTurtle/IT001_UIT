#include<bits/stdc++.h>
#define MAXN 1000
using namespace std;

int num[100];
int deno[100];
int m;
typedef struct { 
	int x;
	int y;
} PhanSo;
void Nhap(PhanSo a[], int n) {
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num[i];
		cin >> deno[i];
	}
}

void Xuat(PhanSo a[], int n) {
	int x;
	for (int i = 0; i < m; i++) {
		if (deno[i] == 0) {
			cout << "Khong thoa yeu cau bai toan" << endl;
		} else if (num[i] == 0) {
			cout << 0 << endl;
		} else if (deno[i] * num[i] < 0) {
			x = __gcd(abs(deno[i]), abs(num[i]));
			if (abs(deno[i])/x == 1)
				cout << "-" << abs(num[i]) / x << endl;
			else
				cout << "-" << abs(num[i]) / x << "/" << abs(deno[i]) / x << endl;
		} else {
			x = __gcd(abs(deno[i]), abs(num[i]));
			if (abs(deno[i])/x == 1)
				cout << abs(num[i]) / x << endl;
			else
				cout << abs(num[i]) / x << "/" <<abs(deno[i]) / x << endl;
		}
	}
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}
