#include<bits/stdc++.h>
using namespace std;

int main()
{
#define int long long int
	int n;
	cin >> n;
	int arr[13] = {0};
	int i = 0;
	int _count = 0;
	while (n > 0) {
		arr[i] = n % 10;
		n /= 10;
		_count += 1;
		i += 1;
	}

	int x = 1;
	for (int j = 0; j < _count; j ++) {
		if (j == 0)
			continue;
		x += arr[j]*pow(10, j-1)*(j+1);
	}
	cout << x+_count << endl;
	return 0;
}
