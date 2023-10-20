#include<bits/stdc++.h>
using namespace std;

int main() 
{
	long long int n, s, sum;
	cin >> n;
	cin >> s;

	sum = n*(n+1) / 2;
	int count = 0;
	if (sum - s >= 0) {
		while (sum - s > 2*(n-count)) {
			sum -= 2*(n-count);
			count += 1;
		}
		if ((sum % 2 == 1 && s % 2 == 1) || (sum % 2 == 0 && s % 2 == 0)) {
			for (int i = 0; i < n-count; i++) {
				if (i == (sum -s)/2 -1) {
					cout << "-";
				} else {
					cout << "+";
				}
			}
			for (int i = n - count; i < n; i++)
				cout << "-";
		} else {
			cout <<  "NO_SOLUTION";
		}
	} else {
		cout << "NO_SOLUTION";
	}
	return 0;
}
