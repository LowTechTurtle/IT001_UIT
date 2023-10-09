#include<iostream>

using namespace std;

int main()
{
	long int i1, i2;
	scanf("%ld", &i1);
	scanf("%ld", &i2);
	long int g = 2*i1 - i2/2;
	long int c = i2/2 - i1;

	cout << g << " " << c << endl;
	
	return 0;
}
