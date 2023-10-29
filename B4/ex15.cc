#include<bits/stdc++.h>
using namespace std;

int main()
{
#define int long long int
	string n;
	cin >> n;
	int n_i = stoll(n);
	int len = n.length();
	int result;
	if (len >= 2) {
		result = ((n_i-pow(10, len - 1))/10 + 1);
		result *= len;
		result += (n_i > 1) ? 1 : 0;
	} else {
		result = 1;
	}

	if (n_i == 1) {
		cout << result << endl;
		return 0;
	}

	int sum = 0;
	for (int i = 2; i < len; i++) {
		sum += 9*pow(10, i -2)*i;
	}
	if (n_i % 10 == 0) {
		cout << result + sum << endl;
	} else {
		cout << result + sum + len << endl;
	}
	return 0;
}
