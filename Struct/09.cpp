/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/
#include <iostream>
#include <math.h>

using namespace std;

//###INSERT CODE HERE -
struct Diem
{
    int x ;
    int y ;
};



void nhapDSDiem ( Diem a[] , int &n )
{
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a [ i ] .x >> a [ i ] .y ;
        }
}

void xuatDSDiem ( Diem a[] , int n )
{
    for ( int i = 0 ; i < n ; i++ )
        {
            cout << "(" << a [ i ] .x << ',' << a [ i ] .y << ")\n" ;
        }
}

Diem diemDoiXungQuaO ( Diem M )
{
    Diem N ;
    N.x = -M.x ;
    N.y = -M.y ;
    return N ;
}

Diem khoangCachNhoNhat ( Diem a[] , int n , Diem M )
{
    float kc = sqrt ( pow ( M.x - a[ 0 ].x , 2 ) + pow ( M.y - a[ 0 ].y , 2 ) );
    int index = 0 ;
    
    for ( int i = 1 ; i < n ; i++ )
        {
            if ( kc > float ( sqrt ( pow ( M.x - a[ i ].x , 2 ) + pow ( M.y - a[ i ].y , 2 ) ) ) ) 
                {
                    kc = float ( sqrt ( pow ( M.x - a[ i ].x , 2 ) + pow ( M.y - a[ i ].y , 2 ) ) ) ;
                    index = i ;
                }
                    
        }
    return a[index] ;
}

int main()
{
    Diem a[100];
    int n;
    nhapDSDiem(a,n); // Nhap danh sach cach diem trong mat phang Oxy
    cout<<"Danh sach diem trong mat phang Oxy:\n";
    xuatDSDiem(a,n); // Xuat danh sach cac diem, moi diem tren 1 dong

    Diem M,N;
    cout<<"\nNhap mot diem de kiem tra khoang cach: ";
    cin>>M.x>>M.y;

    N = diemDoiXungQuaO(M);
    cout<<"\nDiem doi xung voi ("<<M.x<<","<<M.y<<") qua goc toa do O: ("<<N.x<<","<<N.y<<")";

    N = khoangCachNhoNhat(a,n,M);
    cout<<"\nDiem co khoang cach ngan nhat toi ("<<M.x<<","<<M.y<<"): ("<<N.x<<","<<N.y<<")";


    return 0;
}
