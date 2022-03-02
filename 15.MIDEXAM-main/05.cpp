#include <iostream>
#include <math.h>

using namespace std;
bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main () 
{
    int a[51] , n ;
    cin >> n ;
    if ( n == 0 ) 
        {
            cout << "Khong co so nguyen to" ;
            return n ;
        }
    else 
    {
        for ( int i = 0 ; i < n ; i++ ) 
        {
            cin >> a [ i ] ;
        }
    
    int count = 0 , sum = 0 ;
    for ( int i = 0 ; i < n ; i++ ) 
        {
            if ( IsPrime ( a [ i ] ) )
                {
                    count ++ ;
                    sum += a [ i ] ;
                } 
        }
    if ( count == 0 ) 
        {cout << "Khong co so nguyen to" ;
            return n; 
        }

    int i , count2 = 0 ;
    for ( i = 0 ; i < n ; i++ )
        {
            if ( IsPrime ( a [ i ] ) )
                {
                    if ( sum % a [ i ] == 0 ) 
                       count2++ ;
                }
        }
    if ( count2 != 0 )
        cout << "YES" ;
    else 
        cout << "NO" ;
    }
    return 0 ;
}