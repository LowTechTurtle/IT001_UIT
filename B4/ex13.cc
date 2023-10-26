#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s, s1;
    int k;
    getline(cin , s);
    getline(cin , s1);
    if (s1[s1.length() -1] == '\n') {
	    s1 = s1.substr(0, s.length() - 1);
    }
    cin >> k;
    
    if (k >= 0 && k <= s.length()) {
        for (int i = 0; i < k; i++) {
            cout << s[i];
        }
        cout << s1 << " ";
        for (int i = k; i < s.length(); i++) {
            cout << s[i];
        }
        cout << endl;
    } else {
        cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
    }
    return 0;
}
