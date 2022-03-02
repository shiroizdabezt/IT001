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

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	cin.getline(s, 299);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

//###INSERT CODE HERE -
int myStrcmp ( char s1[], char s2[] ) 
{
	int i = 0 ;
	while ( s1 [ i ] == s2 [ i ] && s1 [ i ] != '\0' )
		i++;
	if ( s1 [ i ] == s2 [ i ] )
		return 0 ;
	else if ( s1 [ i ] < s2 [ i ] )
		return -1 ;
	else 
		return 1 ;
}
int myStrlen ( char s[] , int k )
{
	while ( s[k] != '\0' )
		{
			k++; 
		}
	return k ;
} 



void DemKyTu(char s[])
{
    int count [ 10000 ] , the_letter_have_seen [ 10000 ] , letter ; 
    for( int i = 32 ; i <= 126 ; i++ ) 
    {
        count [ i ] = 0 ; 
        the_letter_have_seen [ i ] = 0 ;
    }
    for( int i = 0 ; i < myStrlen ( s , 0 ) ; i++)
    {
        letter = int ( s [ i ] ) ;
        count [ letter ] ++ ;
    }
    for(int i = 0 ; i < myStrlen ( s , 0 ) ; i++)
    {
        letter = int ( s [ i ] ) ;
        if ( the_letter_have_seen [ letter ] == 0 )
        {
            cout << s [ i ] << ": " << count [ letter ] <<'\n';
            the_letter_have_seen [ letter ] = 1 ;
        }
    }
}

