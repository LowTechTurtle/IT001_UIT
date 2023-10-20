#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int n = 0;
	long long int a[2*100000];
	map<int, int> _map;
	int temp;
	cin >> t;
	int count = 0;
	for (int i = 0; i < t; i++) {
		cin >> temp;
		if (temp % 2 == 0) {
			a[n] = temp;
			n += 1;
		}
	}

	for (int i = 0; i < n; i++) {
		while (a[i] % 2 == 0) {	
			a[i] /= 2;
			count += 1;
		}
		if (_map[a[i]]) {
			if (_map[a[i]] < count)
				_map[a[i]] = count;
		} else {
			_map[a[i]] = count;
		}
		count = 0;
	}

	int res = 0;
	map<int, int>::iterator it = _map.begin();

	while (it != _map.end()) {
		res += it -> second;
		++it;
	}

	cout << res << endl;
	return 0;
}
