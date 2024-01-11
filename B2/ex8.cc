#include<bits/stdc++.h>
using namespace std;

//string cons = "bcdfghjklmnpqrstvxz";
string cons = "qrtpsdfghjklzxcvbnm";
string s;
int f[19][19] = {0};
int _2pow19 = 1 << 19;

void output(int k)
{
	for (int i = 0; i < s.length(); i++) {
		int p = cons.find(s[i]);
		if (((k >> p) & 1) == 1)
			s[i] = toupper(s[i]);
	}
	cout << s << endl;
}

int main()
{
	int i, j, len1, p1, p2, k, t;
	cin >> s;
	
	for (i = 0, len1 = s.size() - 1; i < len1; i++) {
		p1 = cons.find(s[i]);
		p2 = cons.find(s[i+1]);
		if ((p1 != string::npos) && (p2 != string::npos)) {
			f[p1][p2]++;
//			f[p2][p1]++;
		}
	}
	int sum, kmax;

	for (k = 0, kmax = sum = 0; k < _2pow19; k++) {
		t = 0;
		for (i = 0; i < 19; i++) {
			for (j = 0; j < 19; j++) {
				if (((k >> i) & 1) != ((k >> j) & 1)) {
					t += f[i][j];
				}
			}
		}
		if (t > sum) 
			sum = t, kmax = k;
	}

	output(kmax);
	return 0;
}
