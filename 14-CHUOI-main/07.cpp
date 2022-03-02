#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

//###INSERT CODE HERE -
void Chuanhoa ( char str[] )
{
    for ( int i = 0 ; i < strlen ( str ) ; i++ )
      {
         if ( 'A' <= str [ i ] && str [ i ] <= 'Z' )
            str[i] = str[i] + 32 ;
      }
        if ( 'a' <= str[ 0 ] && str[ 0 ] <= 'z' )
            str[ 0 ] = toupper ( str[ 0 ] ) ; 
      for ( int i = 1 ; i < strlen ( str ) ; i++ )
      {
            if ( str[ i ] == ' ' ) 
                if ( 'a' <= str[ i + 1 ] && str[ i + 1 ] <= 'z' )
                    str[ i + 1 ] = str[ i + 1 ] - 32 ;
      }
    int len = strlen ( str ) ;
    while ( str[0] == ' ' )
        strcpy ( &str[ 0 ] , &str[ 1 ] ) ;
    while ( str[ len - 1 ] == ' ' ) 
        str[ len - 1 ] = '\0' ;
    for ( int i = 0 ; i < strlen ( str ) ; i++ )
        if ( str[ i ] == ' ' && str[ i + 1 ] == ' ' ) 
            {
                strcpy ( &str[ i ] , &str[ i + 1 ] ) ;
                i-- ;
            } 
}

int main()
{
	char s[MAX];
	cin.getline(s, 299);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}
