#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, r, c, k;
	while (1) {
		cin >> n >> r >> c >> k;
		if (n == 0 && r == 0 && c == 0 && k == 0) 
			break;

		int a[r][c] = {{0}};
		int ans[r][c] = {{0}};
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> a[i][j];
				ans[i][j] = a[i][j];
			}
		}

		for (int b = 0; b < k; b++) {
			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					int heir = a[i][j];
					int bro = heir < n - 1 ? heir + 1 : 0;
			
					if (i > 0 && a[i -1][j] == bro)
						ans[i-1][j] = heir;

					if (i < r-1 && a[i+1][j] == bro)
						ans[i+1][j] = heir;

					if (j < c-1 && a[i][j+1] == bro)
						ans[i][j+1] = heir;

					if (j > 0 && a[i][j-1] == bro)
						ans[i][j-1] = heir;
				}	
			}
			memcpy(a, ans, sizeof(ans));
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << ans[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
