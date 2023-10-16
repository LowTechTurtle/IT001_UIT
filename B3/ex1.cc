#include<bits/stdc++.h>
using namespace std;

vector<string> vec;
string s;

void permute(int lf, int rt)
{
	if (lf == rt) {
		vec.push_back(s);
	} else {
		for (int i = lf; i <= rt; i++) {
			swap(s[lf], s[i]);
			permute(lf + 1, rt);
			swap(s[lf], s[i]);
		}
	}
}


int main() 
{
	cin >> s;
	permute(0, s.size()-1);
	sort(vec.begin(), vec.end(), greater<string>());
	for (auto x: vec) 
		cout << x << "\n";
	return 0;
}
