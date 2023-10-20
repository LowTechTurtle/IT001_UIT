#include<bits/stdc++.h>
using namespace std;

int get_distance(int x, int y) 
{
	int res = 0;
	if (x < 0 && y < 0) {
		while (x < 0 && y < 0) {
			x += 1;
			y += 1;
			res += 1;
		}
		if (x == 0) {
			res += abs(y);
		}
		else if (y == 0) {
			res += abs(x);
		}
	} else if (x < 0 && y > 0) {
		while (x < 0 && y > 0) {
			x += 1;
			y -= 1;
			res += 1;
		}
		if (x == 0) {
			res += abs(y);
		}
		else if (y == 0) {
			res += abs(x);
		}
	} else if (x > 0 && y < 0) {
		while (x > 0 && y < 0) {
			x -= 1;
			y += 1;
			res += 1;
		}
		if (x == 0) {
			res += abs(y);
		}
		else if (y == 0) {
			res += abs(x);
		}
	} else if (x > 0 && y > 0) {
		while (x > 0 && y > 0) {
			x -= 1;
			y -= 1;
			res += 1;
		}
		if (x == 0) {
			res += abs(y);
		}
		else if (y == 0) {
			res += abs(x);
		}
	}

	return res;
}

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
		temp = get_distance(x, y);
		m[temp].push_back(i+1);
	}
	
	map<int, vector<int>>::iterator it = m.begin();
	while (it != m.end()) {
		for (auto x: it -> second) {
			cout << x << " ";
		}
		it++;
	}
	cout << endl;
}
