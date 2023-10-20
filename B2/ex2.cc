#include<bits/stdc++.h>
using namespace std;

bool helper(string num, int inx, long first, long second)
{
    int n = num.length();
    long val = 0;
    for(int i = inx ; i < n; i++)
    {
        val = val*10 + (num[i]-'0');
        if(i > inx && num[inx] == '0') break;
        if(first == -1)
        {
        	if(helper(num, i+1, val, second)) return true;
        }
        else if(second == -1)
        {
        	if(helper(num, i+1, first, val)) return true;
        }
        else
        {
        	if(first + second == val)
        	{
        	if(i == n-1) return true;
        	return helper(num, i+1, second, val);
        	}
        	if(first + second < val) break;
        }
    }
    return false;
}
bool isAdditiveNumber(string num) 
    {
        return helper(num, 0, -1, -1);
    }
int main()
{
        string str;
        cin >> str;
        
        if (isAdditiveNumber(str)) {
        	cout << "true";
        } else {
        	cout << "false";
        }
        return 0;
}
