#include <iostream>
#include <math.h>

using namespace std;

//###INSERT CODE HERE -

void inputMatrix ( int a[100][100] , int &n , int &m ) 
{
	cin >> n >> m ;
	for ( int i = 0 ; i < n ; i++ )
		for ( int j = 0 ; j < m ; j++ )
			cin >> a[i][j] ;
}
 
int findRow(int  a[100][100] , int n , int m )
{
	int row = 0, i , j  ;
	for ( i = 0 ; i < n ; i++ )
		{
			for (  j = 0 ; j < m ; j++ )
				if ( a[i][j] == 1 )
					row++ ;
			if ( row == m ) 
				return i ;
            row = 0 ;
		}
	return -1 ;
}

int main()
{
	int a[100][100],n,m;
	inputMatrix(a, n,m);

	cout<<findRow(a,n,m);

	return 0;
}
