#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1, 254);
	cin.getline(s2, 254);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

//INSERT CODE HERE
int myStrcmp ( char s1[] , char s2[] )
{
	int i = 0 , j = 0 ;
	while ( s1 [ i ] != '\0' )
		{
			i++ ;
		}
	while ( s2 [ j ] != '\0' )
		{
			j++ ;
		}
	if (i < j )
		return -1 ; 
	else if ( i == j )
        {
            for ( int a = 0 ; a <= i ; a++ )
                    if ( s1[a] > s2[a] )
                        return 1 ;
					else if ( s1[a] < s2[a] )
						return -1 ;
        return 0 ;
        }
		
	else 
		return 1 ;
}