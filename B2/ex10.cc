#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, f0, d;
	cin >> n >> f0 >> d;

	long long int arr[n][2];
	int pos[n];
	int index[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
		if (i == f0 - 1) {
			pos[i] = 0;
		} else {
			pos[i] = 3;
		}
	}
	int j = 0;
	for (int i = 0; i < n; i++) {
		if(sqrt(pow(arr[f0-1][0] - arr[i][0], 2)+pow(arr[f0-1][1] - arr[i][1], 2)) < d) {
			if (pos[i] > 1)
				pos[i] = 1;
			index[j] = i;
			j++;
		}
	}

	for (int x = 0; x < j; x++) {
		for (int i = 0; i < n; i++) {
			if (sqrt(pow(arr[index[x]][0] - arr[i][0], 2)+pow(arr[index[x]][1] - arr[i][1], 2)) < d) {
				if (pos[i] == 3) 
					pos[i] = 2;
			}
		}
	}
	int count_1 = 0, count_2 = 0;
	for (int i = 0; i < n; i++) {
		if (pos[i] == 1)
			count_1 += 1;
		else if (pos[i] == 2) 
			count_2 += 1;
	}
	cout << count_1 << " " << count_2 << endl;
	return 0;
}
