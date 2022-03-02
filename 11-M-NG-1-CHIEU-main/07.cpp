#include <iostream>
using namespace std ; 
void inputarray ( int a[] , int &n )
{
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ ) 
        {
            cin >> a[i] ;
        }
}
bool test ( int a[] , int n )
{
    int i ;
    for (i = 0 ; i < n ; i++ ) 
        if ( a[i] != a[ n - 1 - i ] )
            {
                return false ;
            }
    return true ;
}
int main()
{
    int a[10000] , n ;
    inputarray ( a , n ) ;
    if ( test ( a , n ) == true )
        cout << "array is palindrome";
    else    
        cout << "array is not palindrome"  ;
    return 0 ;
}