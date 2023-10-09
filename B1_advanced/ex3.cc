#include<bits/stdc++.h>

using namespace std;
bool check(int mid, int arr[], int n, int k)
{
	int sum = 0;
	while (sum <= mid) {

int main() 
{
	long int n, k;
	cin >> n;
	cin >> k;
	long int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long int lo = 1;
	long int hi = 1e9;
	int mid = lo + (hi - lo) / 2;
	int ans;
	
	while (lo <= hi) {
		mid = lo + (hi - lo) / 2;
		
		if (check(mid)) {
			ans = mid;
			hi = mid - 1;
		} else {
			low = mid + 1;
		}
	}
