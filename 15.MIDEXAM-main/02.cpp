#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int a [ 100 ] , n , b [ 100 ] , m , sum = 0 ;
    cin >> n >> m ;
    
    for ( int i = 0 ; i < n ; i++ ) 
        {
            cin >> a [ i ] ;
        }
    for ( int i = 0 ; i < m ; i++ ) 
        {
            cin >> b [ i ] ;
        }
    int maxa = a[0] , maxb = b[0] ;
    for ( int i = 0 ; i < n ; i++ )
        {
            if ( a [ i ] > maxa )
                maxa = a [ i ] ;
        }
    for ( int i = 0 ; i < m ; i++ )
        {
            if ( b [ i ] > maxb )
                maxb = b [ i ] ;
        }
    sum = maxa + maxb ;
    cout << sum ;
    return 0;
}