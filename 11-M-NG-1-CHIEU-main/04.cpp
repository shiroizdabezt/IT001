#include <iostream>
#include <math.h>

using namespace std;

//###INSERT CODE HERE -
int ham_x ( int a[] , int n )
{
    int count = 0 ;
    for ( int i = 0 ; i < n ; i ++ )
        {
            if ( a[i] == 0 )
                count ++;
            else if ( a[i] < 0 )
               { 
                   count++ ;
                   a[i] *= -1 ;
                    while ( a[i] > 0 )
                    {
                        count ++ ;
                        a[i] /= 10 ;
                    }
               }
            else 
                    while ( a[i] > 0 )
                    {
                        count ++ ;
                        a[i] /= 10 ;
                    }
        }
    return count ;
}


int main()
{
    int n, a[1000000], dem = 0;
    cin >> n ;
    for (int i=0;i<n;i++)
    {
        cin >> a[i] ;

    }
    cout << ham_x(a,n);

    return 0;
}