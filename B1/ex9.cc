#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
        long int m, n;
        long int i = 0;
        scanf("%d", &n);
        long int arr_n[n];
        for (i = 0; i < n; i ++) {
                cin >> arr_n[i]; //scanf("%d", &arr_n[i]);
        }

        scanf("%d", &m);
        long int arr_m[m];
        for (i = 0; i < m; i ++) {
                cin >> arr_m[i]; //scanf("%d", &arr_m[i]);
        }

        long int lo = 1;
        long int hi = 14;//2 * 1e8;
        long int M = (lo + hi)/2;
        long int j, k;
        j = k = 0;
        long int arr[m > n? m : n][2] = {{0}};
        int count = 0;
        int count_ans = 0;
        while (lo <= hi) {
                cout << lo << " " << hi << endl;
                M = lo + (hi - lo) / 2;
                while (k < m && j < n) {
                        cout  << j << ' ' << k << ' ' << M << ' ' << arr_n[j] << ' ' << arr_m[k] << '\n';
                        if (arr_n[j] >= M) {
                                j += 1;
                        } else if (arr_n[j] + arr_m[k] >= M) {
                                k += 1;
                                j += 1;
                                arr[count][0] = j;
                                arr[count][1] = k;
                                count++;
                        } else {
                                k += 1;
                        }
                }
                //cout << M << ' ' << j << ' ' << k << '\n';
              
                if (k >= m) {
                        hi = M - 1;
                } else {
                        lo = M + 1;
                }
                count_ans = count;
                k = j = count = 0;
        }

        cout << M << " " << count_ans << endl;
        for (int l = 0; l < count_ans; l++) {
                cout << arr[l][0]<< " " << arr[l][1] << endl;
        }
        return 0;
}
