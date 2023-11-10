#include<bits/stdc++.h>
using namespace std;

int main() 
{
#define int long long int
	//freopen("input38.txt", "r", stdin);
	int n, k;
	cin >> n >> k;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	vector<vector<int>> v(10, vector<int>(10, 0));

	int j_max = s[0].length() - 1;
	int temp;
	for (int i = 0; i < n; i++) {
		int len = s[i].length() - 1;
		if (len > j_max)
			j_max = len;
		for (int j = len; j >= 0; j--) {
			temp = (int)(9 - (s[i][len-j] - '0'));
			v[j].push_back(temp);
			//cout << j << " " << temp << endl;
		}
	}

	for (int i = 0; i < 10; i++) {
		sort(v[i].begin(), v[i].end() );
	}

	int ans = 0;
	//cout << j_max << endl;
	for (int i = j_max; i >= 0 && k > 0; k--) {
		//if (i < 0)
		//	break;
		int sz = v[i].size();
		if (sz > 0) {
			//cout << i << " " << sz-1 << endl;
			if (v[i][sz-1] > 0) {
				ans += v[i][sz-1] * pow(10, i);
				v[i].pop_back();
			} else {
				v[i].pop_back();
				k += 1;
			}
		} else {
			i -= 1;
			k += 1;
		}
	}

	cout << ans << endl;
	return 0;
}
