#include<bits/stdc++.h>
using namespace std;

int a[4][4] = {{0}};
int m[4][4] = {{0}};

bool check()
{
	int x;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			x = a[i][j];
			int count = 0;
			if (i > 0 && m[i-1][j] == 1) 
				count += 1;
			
			if (i < 3 && m[i+1][j] == 1) 
				count += 1;

			if (j > 0 && m[i][j-1] == 1) 
				count += 1;

			if (j < 3 && m[i][j+1] == 1) 
				count += 1;

			if (i > 0 && j > 0 && m[i-1][j-1] == 1) 
				count += 1;

			if (i > 0 && j < 3 && m[i-1][j+1] == 1) 
				count += 1;

			if (i < 3 && j > 0 && m[i+1][j-1] == 1) 
				count += 1;

			if (i < 3 && j < 3 && m[i+1][j+1] == 1) 
				count += 1;

			if (x != count) 
				return false;
		}
	}
	return true;
}


int main()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
		cin >> a[i][j];
	}

	for (int i = 0; i < pow(2, 16); i ++) {
		for (int j = 0; j < 16; j++) {
			m[j/4][j%4] = (i >> j) & 1;
		}
		if (check()) {
			for (int k = 0; k < 4; k++) {
				for (int l = 0; l < 4; l++) {
					cout << m[k][l] << " ";
				}
				cout << "\n";
			}
			return 0;
		}
	}
	return 0;
}
