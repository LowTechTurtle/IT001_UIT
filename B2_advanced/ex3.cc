#include<bits/stdc++.h>
using namespace std;

int n;

bool is_safe(vector< vector<int> > &board, int row, int cl)
{
	for (int i = 0; i < cl; i++) {
		if (board[row][i] == 1)
			return false;
	}

	for (int x = row, y = cl; x >= 0 && y >= 0; x--, y--) {
		if (board[x][y] == 1)
			return false;
	}
	
	for (int x = row, y = cl; x < n && y >= 0; x++, y--) {
		if (board[x][y] == 1)
			return false;
	}

	return true;
}

bool solve(vector< vector<int> > &board, int col) 
{
	if (col == n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == 1) {
					cout << "X";
				} else {
					cout << ".";
				}
			}
			cout << "\n";
		}
		return true;
	}

	for (int i = 0; i < n; i++) {
		if (is_safe(board, i, col)) {
			board[i][col] = 1;
			if (solve(board, col + 1))
				return true;
			board[i][col] = 0;
		}
	}
	return false;
}

int main()
{
	cin >> n;
	vector<vector<int> > board(n, vector<int>(n, 0));
	solve(board, 0);
}
