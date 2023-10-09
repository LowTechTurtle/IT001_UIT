#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int arr[26] = {0};
	int n = 0;
	for (char x: s) {
		arr[(int)x - 97] += 1;
		n += 1;
	}
	int count = 0;

	int len = s.length();
	for (int i = 0; i < n; i ++) {
		int x = (int)s[i] - 97;
		//cout << x << " " << len-i-arr[x] << endl;
		count += len - i - arr[x];
		arr[x] -= 1;
	}

	cout << count + 1 << endl;

	return 0;
}
