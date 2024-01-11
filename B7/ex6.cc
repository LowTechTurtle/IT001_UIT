#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000]; 

int max_subarr(int pos, int acc)
{
	if (pos > n)
		return acc;

	int j = pos;

	while (a[pos] >= a[j]) {
		j++;
		if (j >= n) {
			return acc;
		}
	}

	int x = max_subarr(j, acc+1);
	int y = max_subarr(j+1, acc);

	if (x > y)
		return x;
	else 
		return y;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << max_subarr(0, 1) << endl;

	return 0;
}
