#include <iostream>

using namespace std ;

void inputarray ( int a[] , int &n )
{
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ ) 
        {
            cin >> a[i] ;
        }
}

int check ( int a[] , int n )
{
    int tang = 0 , giam = 0 ;
    for (int i = 0 ; i < n-1 ; i++ )
        {
            if ( a[i] < a[i+1] )
                tang++ ;
            else if ( a[i] > a[i+1] )
                giam++;
        }
    if (n == 1 )
        return 0 ;
    if ( tang == n - 1 )
        return 0 ;
    else if ( giam == n - 1 )   
        return 1 ;
    else 
        return 2;
}

int main()
{
    int a[101] , n ;
    inputarray ( a , n ) ;
    int checkmang = check ( a , n ) ;
    if ( checkmang == 0 )
        cout << "Mang tang dan" ;
    else if ( checkmang == 1 )
        cout << "Mang giam dan" ;
    else if ( checkmang == 2 )
        cout << "Mang khong tang, khong giam";
    return 0 ;
}