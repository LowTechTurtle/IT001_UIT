#include<bits/stdc++.h>
using namespace std;

int main()
{
#define int long long int
	int n;
	cin >> n;
	string s[n];
	map<char, int> m;
	int swp[10] = {0};
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	for (int i = 0; i < n; i++) {
		int j = 0;
		int len = s[i].length() - 1;
		for (char x: s[i]) {
			m[x] += pow(10, len - j);
			j += 1;
		}
	}
	int mx = m['0'];
	int j = 9;
	char temp;
	for (int k = 0; k < 10; k++) {
		for (int i = 0; i < 10; i++) {
			if (m[arr[i]] > mx) {
				temp = arr[i];
				mx = m[temp];
			}
		}
		swp[(int)(temp - '0')] = j;
		j -= 1;
		m[temp] = -1;
		mx = -1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < s[i].length(); j++) {
			s[i][j] = swp[(int)(s[i][j]) - '0'] + '0';
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += stoll(s[i]);
	}
	cout << ans << endl;
	return 0;
}

