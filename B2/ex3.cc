#include<bits/stdc++.h>
using namespace std;

string s_in, word;
int n, m, wordlen = 1;
vector<vector <char>> table(10, vector<char>(10, 'a'));

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

bool dfs(vector<vector<char>>& board, string word,
        int index, int i, int j, int m, int n) {
        
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[index]) {
            return false;
        }
        if (index == word.size() - 1) {
            return true;
        }
        
        board[i][j] = '#';
        
        if (dfs(board, word, index + 1, i - 1, j, m, n)
            || dfs(board, word, index + 1, i + 1, j, m, n)
            || dfs(board, word, index + 1, i, j - 1, m, n)
            || dfs(board, word, index + 1, i, j + 1, m, n)) {
            return true;
        }
        
        board[i][j] = word[index];
        return false;
    }


bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0]) {
                    if (dfs(board, word, 0, i, j, m, n)) {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
    
int main()
{
	getline(cin, s_in);
	cin >> word;
	text2table();
	if (exist(table, word))
	    cout << "true" << endl;
	else
	    cout << "false" << endl;
	return 0;
}
