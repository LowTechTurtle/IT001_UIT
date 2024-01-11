#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

int myStrcmp(char s1[], char s2[]) {
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0') {
		if ( (int)s1[i] > (int)s2[i] ) {
			return 1;
		} else if ( (int)s1[i] < (int)s2[i] ) {
			return -1;
		}
		i += 1;
	}

	if (s1[i] == '\0' && s2[i] == '\0') 
		return 0;

	if (s2[i] == '\0') 
		return 1;

	if (s1[i] == '\0') 
		return -1;
}
