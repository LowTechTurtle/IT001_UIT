#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int i = 0;
    int n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i ++) {
        scanf("%d", &arr[i]);
    }
    //sort(arr, arr + n);
    sort(arr, arr + n, greater<int>());
    int ans = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > i) {
            ans++;
        }
    }
    /*
    int lo = 0;
    int hi = n - 1;
    int mid = (lo + hi +1)/2;
    while (lo <= hi ) {
        mid = (lo +hi) / 2;
        if (n - mid <= arr[mid]) {
            hi = mid - 1;
            }
        else {
            lo = mid +1;
        }
    }
    while (arr[mid - 1] == arr[mid] && arr[mid - 1] >= n - mid + 1) {
        mid = mid - 1;
    }
    
    int ans = n - mid;
    */
    cout << ans;
    
    return 0;
}
