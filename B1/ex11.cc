#include<iostream>
using namespace std;

int main() {
    long int n, m;
    cin >> n;
    cin >> m;
    
    int count = 0;
    int temp_n = n;
    while (temp_n > 0) {
        temp_n /= 10;
        count += 1;
    }
    
    int x = 1;
    int sum = 0;
    int temp;
    for (int i = 0; i < count; i++) {
        temp = m % 10;
        m = m / 10;
        sum += temp * x;
        x *= 10;
    }
    
    
    x = 1;
    int sum2 = 0;
    while (m > 0) {
        temp = m % 10;
        m = m / 10;
        sum2 += temp * x;
        x *= 10;
    }
    if (sum < n) {
        cout << sum2;
    } else {
        cout << sum2 + 1;
    }
    return 0;
}
