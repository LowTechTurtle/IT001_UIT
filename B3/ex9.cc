#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	long long int d;
	cin >> d;

	for (int i = 0; i < n; i++) {
		if (a[i] != d)
			cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
