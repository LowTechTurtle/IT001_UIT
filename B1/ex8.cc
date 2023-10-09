#include<iostream>
using namespace std;

int main() 
{
	int n;
	scanf("%d", &n);
	long long int s = 0;
	int min = 1001;
	int max = 0;
	int temp;

	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		if (temp > max && i % 2 == 1) {
			max = temp;
		}
		if (temp < min && i % 2 == 0) {
			min = temp;
		}
		if (i % 2 == 0) {
			s += temp;
		} else {
			s -= temp;
		}
	}

	if (min < max && min != 1001 && max != 0) {
		s += 2*max;
		s -= 2*min;
	}
	cout << s;
	return 0;
}
