#include <iostream>

using namespace std ;

void inputArray ( int a[] , int &na )
{
    cin >> na ;
    for ( int i = 0 ; i < na ; i++ ) 
        {
            cin >> a[i] ;
        }
}
void outputArray ( int a[] , int na )
{
    for ( int i = 0 ; i < na ; i++ ) 
        {
            cout << a[i] << " " ;
        }
}
void getNumber ( int a[] , int b[] , int c[] , int d[] , int na , int &nb , int &nc , int &nd )
{
    nb= 0 , nc =0 , nd = 0;
    for ( int i = 0 ; i < na ; i++ )
    {
        if ( a[i] > 0 )
            {
                b[nb] = a[i] ;
                nb++ ;
            }
        else if ( a[i] < 0 )
            {
                c[nc] = a[i] ;
                nc ++ ;
            }
        else if ( a[i] == 0 )
            {
                d[nd] = a[i] ;
                nd++;
            }
    }
}

int main () 
{
    int a[1000] , b[1000] , c[1000] , d[1000] , na , nb , nc , nd ;
    inputArray ( a , na ) ;
    cout << "Array a:\n" ;
    outputArray ( a , na )  ;
    getNumber ( a, b , c , d , na , nb , nc , nd ) ;
    cout << "\nArray b:";
    outputArray ( b , nb ) ;
    cout << "\nArray c:";
    outputArray ( c , nc ) ;
    cout << "\nArray d:";
    outputArray ( d , nd ) ;
    return 0 ;
}