#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int lf, rt;
	cin >> lf >> rt;
	int arr[1000];
	int j = 0;
	for (int num = lf; num <= rt; num++) {
		int i = 2;
		int rc = 1;
		while (num / (i*i) > 0) {
			if (num % (i*i) == 0) {
				rc = 0;
				break;
			}
			i += 1;
		}

		if (rc) {
			arr[j] = num;
			j += 1;
		}
	}

	int mul;
	int count = 0;
	for (int i = 0; i < j; i++) {
		for (int k = i + 1; k < j; k++) {
			
			if (__gcd(arr[i], arr[k]) > 1) {
				continue;
			} else {
				cout << arr[i] << " " <<arr[k] << endl;
				count += 1;
			}
			
			/*
			mul = arr[i] * arr[k];
			int s = 2;
			int rc = 1;
			while (mul / (s*s) > 0) {
				if (mul % (s*s) == 0) {
					rc = 0;
					break;
				}
				s += 1;
			}
			if (rc) 
				count += 1;
				*/
		}
	}
	cout << count << endl;
	return 0;
}
