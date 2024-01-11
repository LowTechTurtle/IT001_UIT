#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int arr[100000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = n; i < n + m; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr+n+m);
    for (int i = 0; i < n+m; i++) 
        cout << arr[i] << " ";
    return 0;
}
