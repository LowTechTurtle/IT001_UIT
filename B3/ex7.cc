#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int a, b;
	cin >> a;
	cin >> b;
	float arr1[a][b] = {{0}};

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr1[i][j];
		}
	}

	int c, d;
	cin >> c;
	cin >> d;
	float arr2[c][d] = {{0}};

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < d; j++) {
			cin >> arr2[i][j];
		}
	}

	float ans[a][d] = {{0}};
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < d; j++) {
			ans[i][j] = 0;
			for (int k = 0; k < b; k++) {
				ans[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < d; j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
