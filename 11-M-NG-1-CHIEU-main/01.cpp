// BÀI SỐ 1 

#include <iostream>

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
    for ( int i = 0 ; i < n ; i++ ) 
        {
            if ( i % 2 == 0 )   
                continue ;
            if ( i % 2 != 0 ) 
                cout << a[i] << " " ;
        }
}
int main () 
{
    int a[1000] , n ;
    inputarray ( a , n ) ;
    outputarray ( a , n ) ;
    return 0 ;
}