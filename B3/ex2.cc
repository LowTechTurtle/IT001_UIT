#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	float a[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		float mx = a[0][i];
		for (int j = 0; j < m; j++) {
			if (a[j][i] > mx) {
				mx = a[j][i];
			}
		}
		//printf("Gia tri lon nhat tren cot %f la: %f\n", i, mx);
		cout << "Gia tri lon nhat tren cot " << i << " " << "la: " << mx << "\n";
	}
	return 0;
}
