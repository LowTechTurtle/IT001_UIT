#include<iostream>

using namespace std;

int main() 
{
	float pound = 1/0.453592;
	float inch = 1/2.54;
	float pa = pound/(inch*inch);
	double x;
	scanf("%lf", &x);
	double y = x/pa;
	cout << y << endl;
	double m =  x/((1/0.453592)/((1/2.54)*(1/2.54)));
	cout << m << endl;
	cout << pa;
}
