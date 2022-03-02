#include <iostream>

using namespace std ;

int main () 
{
    int a [ 10000 ] , n ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a [ i ] ;
        }
    int index = 0 , max = a[ index ] ;
    for ( int i = 0 ; i < n ; i++ )
        {
            if ( a [ i ] >= a [ index ] ) 
                index = i ;
        }
    cout << a [ index ] << '\n' ;
    cout << index ;
}