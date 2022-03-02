#include <iostream> 
using namespace std ;

void inputarray ( int a[] , int &na )
{
    cin >> na ;
    for ( int i = 0 ; i < na ; i++ ) 
        {
            cin >> a[i] ;
        }
}
bool smooth ( int a[] , int n )
{
    int middle , middle2 = n/2 ;
    if ( n % 2 == 0 )
        {
            middle = a[ middle2 ] + a[ middle2 - 1 ] ;
        }
    else 
        {
            middle = a[ middle2 ] ;
        }
    if ( a[0] == middle && a[ n - 1 ] == middle )
        return 1 ;
    else 
        return 0 ;


}
int main () 
{
    int a[100000] , n ;
    inputarray ( a , n ) ;
    cout << smooth ( a , n ) ;
    return 0 ;
}