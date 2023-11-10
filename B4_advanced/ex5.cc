#include<bits/stdc++.h>
using namespace std;

#define M 1000000007
long long int pow_mod(long long int a, long long int b, long long int c)
{
	long long int ans = 1;
	a %= c;
	while (b) {
		if (b & 1)
			ans = (ans * a) % c;
		a = (a * a) % c;
		b >>= 1;
	}
	return ans;
}

int main()
{
	long long int n, l, x, y, z;
	cin >> n >> l;
	x = (l*l) % M;
	y = pow_mod(4, n + 1, M);
	y -= 1;
	y %= M;
	x = (x*y) % M;
	z = pow_mod(3, M - 2, M);
	long long int ans = (x * z);
	ans %= M;
	cout << ans << endl;

	return 0;
}
