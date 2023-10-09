#include<iostream>

using namespace std;

int main() 
{
	long long int n, m;
	scanf("%d", n);
	scanf("%d", m);
	int count = 0;
	int m_temp = m;
	while (n > 0) {
		n = n / 10;
		count += 1;
	}

	int arr[10] = {0};
	for (int i = 0; i < count; i++) {
		arr[i] = m_temp % 10;
		m_temp = m_temp / 10;
	}
