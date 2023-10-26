#include<bits/stdc++.h>
using namespace std;
typedef struct {
	int a;
	int b;
} PhanSo;

PhanSo Nhap() {
	PhanSo x = {.a = 0, .b = 0};
	return x;
}

void Nhap(PhanSo a) {
	return;
}

void Xuat(int x) {
	return;
}

int Chia(PhanSo a, PhanSo b) 
{
	long long int x, y, z, t;
	cin >> x >> y >> z >> t;
	long long int m = x*t;
	long long int n = y*z;
	long long int g = gcd(abs(m), abs(n));
	if (m == 0) {
		cout << 0 << endl; 
	} else if (abs(n/g) == 1) {
		cout << m/n << endl;
	} else if (m*n < 0) {
		cout << "-" << abs(m/g) << "/" << abs(n/g) << endl;
	} else {
		cout << abs(m/g) << "/" << abs(n/g) << endl;
	}
	return 0;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Chia(a, b));
    return 0;
}

