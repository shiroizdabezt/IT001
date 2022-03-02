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
void deleteelement ( int a[] , int n )
{
    int needtodel ;
    cin >> needtodel ;
    for ( int i = 0 ; i < n ; i++ )
        {
            if ( a[i] != needtodel ) 
                cout << a[i] << " " ;
        }
}
int main () 
{
    int a[1000] , n ;
    inputarray ( a , n ) ;
    deleteelement ( a , n ) ;
    return 0 ;
}