#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n, d;
	cin >> n;
	cin >> d;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int count = 0;
	int i = 0;
	int p = 0;

	while (i < n) {
		p = 0;
		if (arr[i] == 1) {
			i += 1;
		} else if (arr[i] == 0) {
			while(arr[i] == 0 && p < d) {
				i += 1;
				p += 1;
			}
			if (p >= d && arr[i - 1] == 0) {
				count += 1;
				arr[i-1] = 1;
			}
		}
	}
	cout << count;
	return 0;
}
