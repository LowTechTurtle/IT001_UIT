#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            count += 1;
        }
    }
    cout << max << endl << count << endl;
}
