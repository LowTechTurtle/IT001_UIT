#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int x, y;
	cin >> n;
	int temp;
	map<int, vector<int>> m;
	for (int i = 0; i < n; i++) {
		cin >> x;
		cin >> y;
		temp = max(abs(x), abs(y));
		m[temp].push_back(i+1);
	}
	
	int sec = 0;
	map<int, vector<int>>::iterator it = m.begin();

	while (it != m.end()) {
		if (it -> first - sec < (it -> second).size()) {
			cout << -1;
			return 0;
		}
		sec += (it -> second).size();
		it++;
	}

	it = m.begin();
	while (it != m.end()) {
		for (auto x: it -> second) {
			cout << x << " ";
		}
		it++;
	}
	cout << endl;
}
