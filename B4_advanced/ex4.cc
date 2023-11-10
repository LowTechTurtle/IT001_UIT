#include<bits/stdc++.h>
using namespace std;

int main()
{
	long double a, k, b, m, n;
	cin >> a >> k >> b >> m >> n;
	b /= (m + 1);
	b *= m;
	a /= (k + 1);
	a *= k;
	a += b;
	cout << ceil(n / a) << endl;
	return 0;
}
