#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	bool kt = myStrcat(s1, s2);

	if (kt)
		cout << s1 << s2 << endl;
	else 
		cout << "Khong noi duoc. Khong du bo nho." << endl;

	return 0;
}

bool myStrcat(char s1[], char s2[]) 
{
	int len1 = myStrlen(s1);
	int len2 = myStrlen(s2);

	if ((len1 + len2) > 254)
		return false;

	return true;
}

int myStrlen(char s[]) 
{
	int i = 0;
	while (s[i] != '\0') {
		i += 1;
	}

	return i;
}
