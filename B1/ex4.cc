#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	double delta = b*b - 4*a*c;
	if (delta == 0) {
		double d = -b/(2*a);
		cout << "PT co nghiem kep: x1 = x2 = " << d;
	} else if (delta < 0) {
		cout << "PTVN";
	} else {
		double x1, x2;
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		cout << "PT co hai nghiem phan biet:" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	return 0;
}
