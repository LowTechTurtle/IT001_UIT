//#include <iostream>
#include <bits/stdc++.h>

#define MAX 100000
using namespace std;

long int a[MAX], b[MAX], n, m, h;

bool Check(long int high)
/*
    return true neu co 1 cach lap voi do cao high
    nguoc lai: false
*/
{
    long int i, j;
    for (i=j=0; i<n; i++)
        if (a[i]<high)
        {
            //for (; (j<m) && (a[i]+b[j]<high); j++);
            while ((j<m) && (a[i]+b[j]<high))
                j ++;
            if (j>=m)
                return false;
            j++;
        }
    return true;
}

long int Solve()
/*
    Xac dinh chieu cao h theo yeu cau
    input: a, b, m, n
    output: h
*/
{
    long int left = 1, right = 2*100000000, mid;
    while (right > left)
    {
        mid = left + (right - left)/2;
        if (Check(mid))
        {
            h = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return h;
}

void Input()
{
    cin >> n;
    for (long int i=0; i<n; i++)
        cin >> a[i];
    cin >> m;
    for (long int i=0; i<m; i++)
        cin >> b[i];
}

void Output()
{
    vector<pair<long int, long int>> res;
    long int i, j;
    for (i=j=0; i<n; i++)
        if (a[i]<h)
        {
            while (a[i]+b[j]<h)
                j ++;
            res.push_back({i, j});
            j++;
        }
    cout << h << " " << res.size() << "\n";
    for (auto r: res)
        cout << r.first+1 << " " << r.second+1 << "\n";
}

int main()
{
    Input();
    h = Solve();
    Output();
    return 0;
}

