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

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];
	cin.getline(s, 299);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}

//###INSERT CODE HERE -

int myStrlen ( char s[] , int k )
{
	while ( s[k] != '\0' )
		{
			k++; 
		}
	return k ;
} 

bool myStrcat(char s1[], char s2[])
{
	int i = myStrlen(s1, 0);
	int j = myStrlen(s2, 0);
	if (i + j > 254)
		return false;
	for (j = 0; s2[j] != 0; i++, j++)
		s1[i] = s2[j];
	s1[i] = '\0';
	return true;
}

void myStrcpy(char s[], int vt, char s1[], int k)
{
	if (k == 0)
		k = myStrlen( s1 , k );
	int i;
	for ( i = 0; i < k; i++ )
	{
		s[ i ] = s1[ i + vt ] ;
	}
	s [ i ] = '\0';
}

void Chuanhoa ( char s [] ) 
{
	int len = myStrlen ( s , 0 ) , i ;
	for ( i = 0 ; i < len ; i++ )
		{
			if ( s [ i ] == '.' && s [ i - 1 ] == ' ' )
				{
					s [ i ] = ' ' ;
					s [ i - 1 ] = '.' ;
					i = i - 2  ;
				}
			if ( s [ i ] == ' ' && s [ i + 1 ] == ' ' )
				{
					for ( int j = i ; j < len ; j++ )
						s [ j ] = s [ j + 1 ] ;
					len -- ;
					i -- ;
				}
			
		}
	s [ i ] = '\0' ;
	for ( i = 0 ; i < len ; i++ )
		{
			if ( s [ i ] == '.' && s [ i + 1 ] != ' ' )
				{
					for ( int j = len ; j >= i + 1 ; j-- ) 
						{
							s [ j + 1 ] = s [ j ] ;
						}
					s [ i + 1 ] = ' ' ;
					len ++ ;
					s [ len ] = '\0' ;
				}
		}
}