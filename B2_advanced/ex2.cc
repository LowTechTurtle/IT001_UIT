#include<bits/stdc++.h>
using namespace std;

int board[9][9];
int mark[5][5];
int _count = 0;
void input()
{
	char x;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> x;
			if (x == 'X') {
				board[i][j] = 0;
				mark[_count][0] = i;
				mark[_count][1] = j;
				_count += 1;
			} else {
				board[i][j] = (int)(x - '0');
			}
		}
	}
}

void output()
{
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
}

bool pos_ok(int i, int j) 
{
	for (int k = 0; k < 9; k++) {
		if (k != i && board[k][j] == board[i][j]) {
			return false;
		}
	}

	for (int k = 0; k < 9; k++) {
		if (k != j && board[i][k] == board[i][j]) {
			return false;
		}
	}

	int x = i / 3;
	int y = j / 3;

	for (int m = x*3; m < x*3 + 3; m++) {
		for (int n = y*3 ; n < y*3 + 3; n++) {
			if (board[m][n] == board[i][j]) {			
				if (m == i && n == j)
					continue;
				else
					return false;
			}
		}
	}

	return true;
}

bool solve(int prob)
{
	if (prob == _count) {
		output();
		return true;
	}
	for (int i = 1; i <= 9; i++) {
		board[mark[prob][0]][mark[prob][1]] = i;
		if (pos_ok(mark[prob][0], mark[prob][1])) {
			if (solve(prob + 1))
				return true;
		} else {
			board[mark[prob][0]][mark[prob][1]] = 'X';
		}
	}

	return false;
}

int main()
{
	input();
	solve(0);
	return 0;
}

