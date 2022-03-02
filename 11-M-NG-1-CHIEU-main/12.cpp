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
int secondele ( int a[] , int n )
{
    int t1 = 0 , t2 = 0 ;
    for ( int i = 0 ; i < n ; i++ )
        {
            if ( a[i] > t1 )
                {
                    t2 = t1 ;
                    t1 = a[i] ;
                }
            else if ( a[i] > t2 && a[i] != t1 )
                {
                    t2 = a[i] ;
                }    
        }
    return t2 ;
}
int main () 
{
    int a[1000] , n ;
    inputarray ( a , n ) ;
    cout << secondele ( a , n ) ;
    return 0 ;
}