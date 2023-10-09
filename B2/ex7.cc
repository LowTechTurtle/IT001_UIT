#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	long long int len = s.length();
	long long int arr[26] = {0};
	long long int count_ = 0;

	for (char x: s) {
		arr[(int)x - 97] += 1;
	}

	for (long long int x: arr) {
		if (x > 1) {
			count_ = 1;
			break;
		}
	}

	for (long long int i = 0; i < len; i++) {
		int x = (int)s[i] - 97;
//		cout << x << " " << len-i-arr[x] << endl;
		count_ += len - i - arr[x];
		arr[x] -= 1;
	}

	cout << count_ << endl;

	return 0;
}
