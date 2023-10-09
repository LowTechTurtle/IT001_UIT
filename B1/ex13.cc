#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int GCD1[n+1];
	int GCD2[n+1];
	GCD1[0] = arr[0];
	for (i = 1; i < n; i++) {
		printf("%d %d \n", GCD1[i-1], arr[i]);
		GCD1[i] = gcd(GCD1[i - 1], arr[i]);
		printf("GCD1 %d\n", GCD1[i]);
	}
	
	GCD2[n] = 0;
	GCD2[n - 1] = arr[n-1];
	for (i = n - 2; i >= 0; i--) {
		printf("%d %d \n", GCD2[i+1], arr[i]);
		GCD2[i] = gcd(GCD2[i + 1], arr[i]);
		printf("GCD2 %d\n", GCD2[i]);
	}
	int max = 1;
	int temp;
	int pos = 0;
	for (i = 0; i < n; i++) {
		temp = gcd(GCD1[i], GCD2[i]);
		if (temp > max) {
			pos = i + 1;
			max = temp;
		}
	}
	cout << pos << " " << max;
	return 0;
}
