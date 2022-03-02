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
void outputarray ( int a[] , int n )
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " ;
    }
}
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
    int a[1000] , b[1000] ,  n , count = 0 ; 
    inputarray ( a , n ) ;
    for ( int i = 0 ;  i < n ; i ++ )
        {
            if ( IsPrime ( a[i] ) )
                {   
                    count ++ ;
                }
        }
    cout << count << "\n" ;
    for ( int i = 0 ;  i < n ; i ++ )
        {
            if ( IsPrime ( a[i] ) )
                {   
                    cout << a[i] << " ";
                }
        }

    return 0 ;
}