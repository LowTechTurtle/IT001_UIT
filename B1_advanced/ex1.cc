#include<bits/stdc++.h>
using namespace std;

int main()
{
	string n;
	cin >> n;
	int int_n = 0;
	for (int i = 0; i < n.length(); i++) {
		int_n += n[i] - '0';
	}
	int mod = int_n % 3;
	for (int i = 0; i < n.length(); i++)
	{
		int rc = 0;
		if (n[i] - '0' + (3 - mod) <= 9 && mod != 0) {
			n[i] = n[i] + (3 -mod);
			if (n[i] - '0' > 6) {
				cout << n;
				return 0;
			}
		}
		while (n[i] - '0' <= 6) {
			n[i] = n[i] + 3;
			rc = 1;
		}
		if (rc == 1) {
			cout << n;
			return 0;
		}

	}
	
	for (int i = 0; i < n.length(); i++) {
		int_n += n[i] - '0';
	}
	mod = int_n % 3;
	if (mod == 0) {
		n[n.length() - 1] = n[n.length() -1] - 3;
	} else {
		n[n.length() - 1] = n[n.length() -1] -(3 - mod);
	}
	cout << n;
	return 0;
}
