#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int step = 0;
	int temp;
	if (a == c && b == d)
		cout << step;
	while (b <= 1e9) {
		step += 1;
		a += 1;
		b += 1;
		temp = __gcd(a, b);
		a = a / temp;
		b = b / temp;
		if (a == c && b == d) {
			cout << step;
			return 0;
		}
	}
	cout << 0;
	return 0;
}
