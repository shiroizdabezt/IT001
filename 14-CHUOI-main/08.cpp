/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
include
class
string
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

//###INSERT CODE HERE -
void Chuanhoa ( char s [] ) 
{
	int len = strlen ( s ) , i ;
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
					strcpy ( &s [ i ] , &s[ i + 1 ] ) ;
					i-- ;
				}
			
		}
	s [ i ] = '\0' ;
	for ( i = 0 ; i < strlen ( s ) ; i++ )
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
/* void Chuanhoa ( char s [] ) 
{
	int len = strlen ( s ) , i ;
	for ( i = 0 ; i < len ; i++ )
		{
			if ( s [ i ] == '.' && s [ i - 1 ] == ' ' )
				{
					s [ i ] = ' ' ;
					s [ i - 1 ] = '.' ;
					i = i - 2  ;
				}
			if ( s [ i ] == ' ' && s [ i - 1 ] == '.' )
				{
					for ( int j = i  ; j < len - 1 ; j++ )
						{
							s [ j ] = s [ j + 1 ] ;
						}
					len -- ;
				}
			if ( s [ i ] == '.' && s [ i + 1 ] != ' ' )
				{
					for ( int j = len ; j >= i + 1 ; j-- ) 
						{
							s [ j + 1 ] = s [ j ] ;
						}
					s [ i + 1 ] = ' ' ;
					s [ len + 1] = '\0' ; 
				}
		} 
} */

int main()
{
	char s[MAX];
	cin.getline(s, 299);

	char s1[MAX];
	strcpy(s1, s);
	Chuanhoa(s1);
	cout << s << endl << s1 << 'a';
	return 0;
}

