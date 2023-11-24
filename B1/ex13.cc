#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    vector<int> h;
    vector<int>gcd1(n),gcd2(n);
    for (int i =0;i<n;i++)
    {
        int hi;
        cin>>hi;
        h.push_back(hi);
    }

    gcd1[0] = h[0];
    for(int i=1; i<n; ++i)
        gcd1[i] = __gcd(gcd1[i-1], h[i]);

    gcd2[n-1] = h[n-1];
    for(int i=n-2; i>=0; --i)
        gcd2[i] = __gcd(gcd2[i+1], h[i]);

    int ans = 0, x = 0;

    for(int i=0; i<n; ++i){
        int g1 = 0;
        if (i > 0) g1 = gcd1[i-1];
        int g2 = 0;
        if (i < n-1) g2 = gcd2[i+1];
        int allGCD = __gcd(g1, g2);
        if (allGCD > ans) ans = allGCD, x = i+1;
    }

    cout << x << ' ' << ans;
    return 0;
}
