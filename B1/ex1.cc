#include<iostream>

using namespace std;
int main() 
{
long int d, n, r;
long int L;
scanf("%ld", &d);
scanf("%ld", &r);
scanf("%ld", &n);
if (n == 1) {
	L = 2*(d+r);
	cout << L;
} else if ( n ==2) {
	L = 2*(d+2*r);
	cout << L;
} else {
	L = d + (2*r - d) + (n-1)*2*d + (n-2)*(2*r -2*d) + 2*r;
	cout << L;
}
}
