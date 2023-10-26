#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("SQUARES.INP", "r", stdin);
	freopen("SQUARES.OUT", "w", stdout);

	long long int n, l, s;
	cin >> n;
	cin >> l;
	
	s = l*l*(pow(4, n+1)-1)/3;

	while (s > 10e9+7) {
		s -= 10e9+7;
	}

	cout << s;

	return 0;
}
