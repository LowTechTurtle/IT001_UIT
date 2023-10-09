#include<bits/stdc++.h>
using namespace std;

int main() 
{
	long long int lf, rt;
	cin >> lf;
	cin >> rt;

	long long int count_l = 0;
	lf -= 1;
	while (lf > 0) {
		count_l += lf / 2;
		lf /= 2;
	}
	long long int count_r = 0;
	while (rt > 0) {
		count_r += rt / 2;
		rt /= 2;
	}

	cout << count_r - count_l << endl;
	return 0;
}
