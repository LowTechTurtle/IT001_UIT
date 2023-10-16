#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n+1] = {0};
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int val;
	cin >> val;
	int index;
	cin >> index;
	int temp[n+1];
	
	for (int i = 0; i < n; i++)
		temp[i] = arr[i];

	for (int i = index + 1; i <= n; i++)
		arr[i] = temp[i-1];

	arr[index] = val;

	for (int i = 0; i < n + 1; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}
