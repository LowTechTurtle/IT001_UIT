#include<bits/stdc++.h>
using namespace std;

//test gh push
int main()
{
	int m, n;
	cin >> n;
	cin >> m;
	long double a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	int marked = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i == j && a[i][j] != 1)) {
				cout << "No" << endl;
				return 0;

			} else if (a[i][j] != 0 && j > i) {
				cout << "No" << endl;
				return 0;

			} else if (a[i][j] != 0 && j < i) {
				if (marked == -1) {
					marked = j;
				} else {
					if (marked == j) 
						continue;
					cout << "No" << endl;
					return 0;
				}
			}
		}
	}

	cout << "Yes" << endl;
	return 0;
}
