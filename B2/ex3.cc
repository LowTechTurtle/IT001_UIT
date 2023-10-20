#include<bits/stdc++.h>
using namespace std;

string s_in, word;
int n, m, wordlen = 1;
char table[6][6];

void text2table()
{
	int i, j, t, len = s_in.size();
	for (i = j = t = 0; t < len - 1; t++) {
		if (isalpha(s_in[t])) {
			table[i][j++] = s_in[t];
		}
		else if (s_in[t] == ']') {
			i += 1;
			n = j;
			j = 0;
		}
	}
	m = i;
}

int dc[4] = {-1, 0, 1, 0};
int dr[4] = {0, -1, 0, 1};

bool search(int i, int r, int c) 
{
	if (i >= wordlen)
		return true;
	if ((c < 0) || (c >= n) || (r < 0) || (r >= m) || word[i] != table[r][c])
		return false;

	table[r][c] = '0';
	for (int d = 0; d < 4; d++) {
		if (search(i + 1, r + dr[d], c + dc[d]))
			return true;
	}
	table[r][c] = word[i];
	return false;
}

int main()
{
	getline(cin, s_in);
	cin >> word;
	text2table();
	wordlen = word.length();
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (search(0, i, j)) {
				cout << "true\n";
				return 0;
			}
		}
	}
	cout << "false\n" << endl;

	return 0;
}
