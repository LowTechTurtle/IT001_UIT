#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

void reverse(char* begin,char* end)
{
    char temp;
    while (begin < end)
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void StringReverse_helper(char* s)
{
    char* word_begin = s;
    char* temp = s;

    while (*temp)
    {
        temp++;
        if (*temp =='\0')
        {
            reverse(word_begin,temp - 1);
        }
        else if (*temp == ' ')
        {
            reverse(word_begin,temp - 1);
            word_begin = temp + 1;
        }
    }

    reverse(s, temp - 1);
}
void StringReverse(char st[])
{
    StringReverse_helper(st);
    int len = myStrlen(st, 0);
    char temp[MAX];
    for( int i = 0; i < len; i++) {
        temp[i] = st[i];
    }
    
    for (int i = 0; i < len; i++) {
        st[i] = temp[len-1-i];
    }
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

int myStrlen(char s[], int k) 
{
	int i = 0;
	while (s[i] != '\0') {
		i += 1;
	}

	return i;
}
