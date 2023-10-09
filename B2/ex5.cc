#include<bits/stdc++.h>
using namespace std;

int main()
{
        long long int t, temp, i, j, k, mid;
        cin >> t;
        for (temp = 0; temp < t; temp++) {
                cin >> k;
                int rc = 0;
                mid = 4*k - 1;
                i = sqrt(mid);
                if (i % 2 == 0)
                        i -= 1;
                for (; i > 1; i -= 2) {
                        if (mid % i == 0) {
                                cout << (i-1)/2 << " " << (mid/i-1)/2 << "\n";
                                rc = 1;
                                break;
                        }
                }
                if (rc == 0)
                        cout << -1 << " " << -1 << "\n";
        }
        
        return 0;
}
