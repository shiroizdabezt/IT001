/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	cin.getline(s, 299);	//Nhap chuoi s
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

int myStrlen(char s[], int k) 
{
	while ( s[k] != '\0' )
		{
			k++; 
		}
	return k ;
}
void Chuanhoa(char s[])
{
	int len = myStrlen ( s , 0 ) ;
	for ( int i = 0 ; i < len ; i++ )
      {
         if ( 'A' <= s [ i ] && s [ i ] <= 'Z' )
            s [ i ] = s [ i ] + 32 ;
      }
      for ( int i = 0 ; i < len ; i++ )
      {
         if ( i == 0 )
            s [ i ] = s [ i ] - 32 ;
         if ( s [ i ] == ' ' && s [ i + 1 ] != ' ' )
            if ( 'a' <= s [ i + 1 ] && s [ i + 1 ] <= 'z' )
                s[ i + 1 ] = s[ i + 1 ] - 32 ;
			else if ( 0 <= s [ i + 1 ] && s [ i + 1 ] <= 9 )
				s[ i + 2 ] = s[ i + 2 ] - 32 ;
      }
}