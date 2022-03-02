#include <iostream>

using namespace std ;

void inputarray ( int a[] , int &n , int b[] , int &m )
{
    cin >> n >> m ;
    for ( int i = 0 ; i < n ; i++ ) 
        {
            cin >> a[i] ;
        }
    for ( int i = 0 ; i < m ; i++ ) 
        {
            cin >> b[i] ;
        }
}
void find ( int a[] , int n , int b[] , int m )
{
    int j ;
    for (int i = 0 ; i < n ; i++)
        {
            for ( j = 0 ; j < m ; j++ )
                if ( a[i] == b[j] )
                    break;
                if ( j == m )
                    cout << a[i] << " ";
        }
}

int main () 
{
    int a[1000] , b[1000] , n , m ;
    inputarray ( a , n , b , m ) ;
    find ( a , n , b , m ) ;
    return 0 ;
}