#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x;
	cin >> n;
	cin >> x;
	int a[n];
	int sum[n] = {0};
	int h = 0;
	int acc = 0;

	cin >> a[0];
	sum[0] = a[0];

	for (int i = 1; i < n; i++) {
		cin >> a[i];
		sum[i] = a[i] + sum[i-1];
	}

	if (x < sum[0]) {
		cout << -1;
		return 0;
	}
	if (x > s[n-1]) {
		acc = sum[n-1];
		h = n;
		while (acc < x) {
			acc += sum[n-1];
			h += 1;
		}

		if (acc == x) {
			cout << h;
			return 0;
		}
		int t = 0;
		while (h-n > 0) {
			acc -= sum[n-1];
			h -= 1;
			int i = 0;
			while (acc < x) {
				if (acc + sum[i] == x) {
					cout << h + i + 2 << endl;
					return 0;
				} else {
					i += 1;
				}
			}
		}

		int repeat = 0;
		while (h > 1) {
			acc -= sum[h-1];
			h -= 1;
			int i = 0;
			while (acc + sum[i] < x) {
				i += 1;
			}

