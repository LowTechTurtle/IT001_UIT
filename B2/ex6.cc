#include<iostream>
#include<string>
using namespace std;

int substr(string s2, string s1, int rc)
{
	int counter = 0;
	int i = 0;

	if (rc == -1)
		i = 0;
	else
		i = rc + 1;

	for(; i < s1.length(); i++) {
		if (counter == s2.length())
			break;

		if (s2[counter] == s1[i]) {
			counter++;
		} else {
			if (counter > 0) {
				i -= counter;
			}
			counter = 0;
		}
	}
	return (counter < s2.length() ? -1 : i - counter);
}

int rotate(string nstring[], int n)
{
	int rc = 1;
	if (n == 1)
		return -1;
	for (int i = 0; i < n; i++) {
		if (nstring[0] != nstring[i]) {
			rc = -1;
		}
	}
	if (rc == 1) 
		return rc;
	string temp[n];
	for (int i = 0; i < n; i++) {
		temp[i] = nstring[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 0; j--) {
			temp[i][n-j-1] = nstring[j][i];
		}
	}
	for (int i = 0; i < n; i++) {
		nstring[i] = temp[i];
	}
	return rc;	
}


int find(string nstring[], int n, string Nstring[], int N)
{
	int i = 0, j = 0;
	int count = 0;
	int rc1 = -1, rc2 = -1;
	if (n == 1 && N == 1 && nstring[0] == Nstring[0]) {
		return 1;
	}
	while (i < N) {
		rc1 = substr(nstring[j], Nstring[i], rc1);
		//cout << "rc1: " <<rc1 << " " << nstring[j] << " " << Nstring[i] << " " << count << endl;
		if (rc1 == -1) {
			i += 1;
			j = 0;
			continue;
		}

		if (n == 1 && rc1 != -1) {
			count += 1;
			continue;
		}

		if (N -i < n) 
			return count;

		int temp_i = i+1;
		j += 1;
		
		while (j < n) {
			rc2 = substr(nstring[j], Nstring[temp_i], rc2);
			//cout << "rc2: " << rc2 << " " << nstring[j] << " " << Nstring[temp_i] << " " << count << endl;
			if (rc2 == -1) {
				break;
			}
			if (rc2 == rc1) {
				//cout << "rc1 = rc2\n";
				rc2 = -1;
				if (j == n - 1) {
					//cout << "this rannnn" << endl;
					count += 1;
				}
				temp_i += 1;
				j += 1;
			}
		}
		j = 0;
	}

	//cout << count << endl;
	return count;
}

int main()
{
	int N, n;
	while (1) {
		cin >> N >> n;
		string Nstring[N];
		string nstring[n];
		if (N == 0 && n == 0) {
			break;
		}

		for (int i = 0; i < N; i++) {
			cin >> Nstring[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> nstring[i];
		}

		int ans[4];
		ans[0] = find(nstring, n, Nstring, N);
		for (int i = 1; i < 4; i++) {
			int rc = rotate(nstring, n);
			if (rc == -1)
				ans[i] = find(nstring, n, Nstring, N);
			else {
				int x = 0;
				for (int j = 0; j < N; j++) {
					if (Nstring[0] != Nstring[i]) 
						x = 1;
				}
				if (x) 
					ans[i] = find(nstring, n, Nstring, N);
				else
				ans[i] = (N-n+1)*(N-n+1);
			}
		}
		cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << endl;
	}

	return 0;
 }
