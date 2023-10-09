#include<bits/stdc++.h>
using namespace std;

int main()
{
        string str;
        cin >> str;

        if ((int)str[0] == 48 && str.length() != 1) {
                cout << "false";
                return 0;
        }
        else if (str.length() <= 2) {
                cout << "false";
        }
        else {
                for (int i = 2; i < str.length(); i++) {
                        if ((int)str[i] - '0' != ((int)str[i-1] - '0') + ((int)str[i-2] - '0')) {
                                cout << "false";
                                return 0;
                        }
                }
                cout << "true";
        }
        return 0;
}
