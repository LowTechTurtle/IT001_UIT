#include<bits/stdc++.h>
using namespace std;

typedef struct DATHUC {
	int x;
} DATHUC;

int n;
double arr1[100];
double arr2[100];

DATHUC *Nhap() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
		cin >> arr2[i];
	}
	DATHUC *x = (DATHUC*)malloc(4);
	return x;
}

void Xuat(DATHUC B) {
	int rc = 1;
	for (int i = 0; i < n; i++) {
		if (arr1[i] == 0) {
			rc = rc && 1;
			continue;
		} else {
			rc = 0;
		}
		if (arr1[i] == -1 && arr2[i] > 1) {
			cout << "-x^" << arr2[i];
		} else if (i != 0 && arr1[i] == 1 && arr2[i] > 1) {
			cout << "+x^" << arr2[i];
		} else if (i == 0 && arr1[i] == 1 && arr2[i] > 1) {
			cout << "x^" << arr2[i];
		} else if (i != 0 && arr1[i] > 0 && arr2[i] == 1) {
			cout << "+" << arr1[i] << "x";
		} else if (i == 0 && arr1[i] > 0 && arr2[i] == 1) {
			cout << arr1[i] << "x";
		} else if (arr1[i] < 0 && arr2[i] == 1) {
			cout << arr1[i] << "x";
		} else if (i != 0 && arr1[i] > 0 && arr2[i] == 0) {
			cout << "+" << arr1[i];
		} else if (i == 0 && arr1[i] > 0 && arr2[i] == 0) {
			cout << arr1[i];
		} else if (arr1[i] < 0 && arr2[i] == 0) {
			cout << arr1[i];
		} else if (i == 0 && arr1[i] > 0 && arr2[i] > 1) {
			cout << arr1[i] << "x^" << arr2[i];
		} else if (i != 0 && arr1[i] > 0 && arr2[i] > 1) {
			cout << "+" <<arr1[i] << "x^" << arr2[i];
		} else if (arr1[i] < 0 && arr2[i] > 1) {
			cout << arr1[i] << "x^" << arr2[i];
		}
	}
	if (rc) {
		cout << 0;
	}
}

double TinhDaThuc(DATHUC B, double x) {
	double ans = 0;
	for (int i = 0; i < n; i++) {
		ans += arr1[i]*pow(x, arr2[i]);
	}
	return ans;
}

int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}

