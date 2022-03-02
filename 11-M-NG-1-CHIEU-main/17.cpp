#include <iostream>

using namespace std ;

void inputarray ( int a[] , int &na , int b[] , int &nb )
{
    cin >> na ;
    cin >> nb ; 
    for ( int i = 0 ; i < na ; i++ )
        cin >> a[i] ;
    for ( int i = 0 ; i < nb ; i++ )
        cin >> b[i] ;
}
void outputarray ( int a[] , int n )
{
    for ( int i = 0 ; i < n ; i++ )
        cout << a[i] << "\n" ;
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
void mix ( int a[] , int na , int b[] , int nb , int c[] , int &nc )
{
  nc = 0;
  for ( int i = 0; i < na ; i++ ) 
    {
        c[ nc ] = a[ i ] ;
        nc++ ;
    }
  for ( int i = 0 ; i < nb ; i++ ) 
    {
        c [ nc ] = b[ i ] ;
        nc++ ;
    }
}
int main() 
{
    int a[100000] , na , b[100000] , nb , c[100000] , nc ;
    inputarray ( a , na , b , nb ) ;
    mix ( a , na , b , nb , c , nc ) ;
    increase ( c , nc ) ;
    outputarray ( c , nc ) ;
    return 0 ;
}


