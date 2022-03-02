#include <iostream>
#include <math.h>

using namespace std;

void inputarray ( int a[] , int &n )
{
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ ) 
        {
            cin >> a[i] ;
        }
}
void DLC ( int a[] , int n ) 
{
    double x = 0 ;
    for ( int i = 0 ; i < n ; i++ ) 
    {
        x += a[i] ;
    }
    x = x / n ;
    double psai = 0 , dlc ;
    for ( int i = 0 ; i < n ; i++ )
    {
        psai = pow ( a[i] - x , 2 ) + psai ; 
    }
    psai = psai / n ;
    dlc = sqrt( psai ) ;
    cout.precision (10) ;
    cout << dlc ;
}
int main () 
{
    int a[1000] , n ;
    inputarray ( a , n ) ;
    DLC ( a , n ) ;

    return 0 ;
}