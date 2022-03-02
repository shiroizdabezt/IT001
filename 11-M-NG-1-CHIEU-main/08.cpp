#include <iostream>
using namespace std ;

void inputarray ( int a[] , int &n )
{
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ )
        cin >> a[ i ] ;
}

void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
void increase ( int a[] , int n )
{
    for( int i = 0 ; i < n-1 ; i++ )
        for( int j = i + 1 ; j < n ; j ++ )
        {
            if ( a[ i ] > a[ j ])
            {
                swap( a[ i ], a[ j ] ) ;
            }
        }
}

int add_Number ( int a [] , int n )
{
    int add = a[ n - 1 ] - a[ 0 ] + 1 - n ;
    for ( int i = 0 ; i < n - 1 ; i++ )
        {
            if ( a[ i ] == a[ i + 1 ] )
                add++ ;
        }
    return add ;
}

int main () 
{
    int a[ 22 ] , n ;
    inputarray ( a , n ) ;
    increase ( a , n ) ;
    cout << add_Number ( a , n ) ;
    return 0 ;
}