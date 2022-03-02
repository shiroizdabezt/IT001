#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int main () 
{
    char s [ 100000] ;
    cin.getline ( s , 100000 ) ;
    int i = 0 , count = 0 , j = 0  ;
    while ( s [ i ] != '\0' )
        {
            for ( int j = 48 ; j <= 57 ; j++ )
                {
                    if ( s[i] == j )
                        count = 1 ;
                }
            i++ ;
        }
    if ( count == 1)
        cout << "CHUOI KHONG HOP LE.";
    else 
        while ( s [ j ] != '\0' )
            {
                cout << s [ j ] ;
                j++ ; 
            }
    return 0 ;

}