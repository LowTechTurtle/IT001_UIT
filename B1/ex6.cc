#include<iostream>

using namespace std;

int main()
{
	long long int x;
	long long int y;
	short i_x;
	short i_y;
	scanf("%lld", &x);
	scanf("%lld", &y);
	int count = 0;
	int count_i = 0;
	while (x > 0 || y > 0) {
		i_x = x % 10;
		i_y = y % 10;
		x = x / 10;
		y = y / 10;
		count_i += 1;
		if (x > y || y > x) {
			count = count_i;
		} 
	}
	cout << count << endl;
}
