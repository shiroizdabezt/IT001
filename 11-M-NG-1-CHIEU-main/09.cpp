#include <iostream> 

using namespace std ;

void inputarray ( int a[] , int &n , int &left , int &right )
{
    cin >> n ;
    
    for ( int i = 0 ; i < n ; i++ )
        cin >> a[i] ;
}
void deleteelement ( int a[] , int n , int left , int right ) 
{
    cin >> left >> right ;
    for ( int i = 0 ; i < n ; i++ )
        if ( i < left || i > right )
            cout << a[i] << " ";
}
int main() 
{
    int a[100000] , n , left , right ;
    inputarray ( a , n , left , right ) ;
    deleteelement ( a , n , left , right ) ;
    return 0 ;
}