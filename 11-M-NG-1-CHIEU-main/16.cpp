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
void outputarray ( int a[] , int &na )
{
    if ( na % 2 == 0 )
        for ( int i = 0 ; i < na - 1  ; i++ ) 
            {
                cout << a[i] << " ";
            }
    else
        for ( int i = 0 ; i < na  ; i++ ) 
            {
                cout << a[i] << " ";
            }
}
void changmiddle ( int a[] , int changed[] , int n )
{
    int middle , middle2 = n/2 ;
    if ( n % 2 == 0 )
        {
            for ( int  i = 0 ; i < middle2 - 1 ; i++ )
                changed[i] = a[i] ;
            changed [ middle2 - 1 ] = a[ middle2 - 1 ] + a[ middle2 ] ;
            
            for ( int i = middle2  ; i < n - 1 ; i++ )
                changed[ i ] = a[ i + 1 ] ;
        }
    else 
        {
            for ( int i = 0 ; i < n ; i++ )
                changed [ i ] = a [ i ] ;
        }       
}
int main () 
{
    int a[100000] , n , changed[100000] ;
    inputarray ( a , n ) ;
    changmiddle ( a ,changed , n ) ;
    outputarray ( changed , n ) ;
    return 0 ;
}