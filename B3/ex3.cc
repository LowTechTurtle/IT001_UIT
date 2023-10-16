#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

void DemKyTu(char s[])
{
    int arr[200] = {0};
    for (int j = 0; s[j] != '\0'; j++) {
		int i = (int)s[j];
		//if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122)) 
		arr[i] += 1;
	}

	for (int i = 0; s[i] != '\0'; i++) {
		int j = (int)s[i];
		if (arr[j] != 0) {
			cout << char(j) << ": " << arr[j] << "\n";
			arr[j] = 0;
		}
	}
}

int myStrcmp(char s1[MAX], char s2[MAX]){
    if (s1[0] == '\0') {
        return 0;
    } else {
        return 1;
    }
}

int main()
{
	char s[MAX];
	//gets(s);	//Nhap chuoi s	
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else {
		DemKyTu(s);
	}

	return 0;
}
