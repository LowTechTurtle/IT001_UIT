#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	float x;
	float ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <n; j++) {
			cin >> x;
			if (i == j) {
				ans += x;
			}
		}
	}

	cout << ans << endl;
}
