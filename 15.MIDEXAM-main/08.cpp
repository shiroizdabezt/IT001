#include <iostream>

using namespace std;



void horizontal_invert (int  a [1000][1000] , int n , int m ) 

//###INSERT CODE HERE -
    
    {
        int i , j , ed = n ;
        for ( i = 0 ; i < n/2 ; i++ )
            for ( j = 0 ; j < m ; j++ )
                {
                    swap ( a[i][j] , a [ ed - 1 - i] [ j ]) ;
                }

    
}

int main()
{
    int n, m;
    cin >> n >> m;

    
    int a[1000][1000];
    
    input(a, n, m); //Hàm này đã được code chuẩn không thể chỉnh, sinh viên không cần quan tâm
    
    horizontal_invert(a, n, m);

    output(a, n, m);//Hàm này đã được code chuẩn không cần chỉnh, sinh viên không cần quan tâm
    
    return 0;
}