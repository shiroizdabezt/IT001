/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

//###INSERT CODE HERE -

void Nhap ( SinhVien a[] , int &n )
{
    cin >> n ;
    cin.ignore () ;
    for ( int i = 0 ; i < n ; i++ )
        {
            cin.getline ( a [ i ].MASV , 10 ) ;
            cin.getline ( a [ i ].HoTen , 100 ) ;
            cin.getline ( a [ i ].NgaySinh , 12 ) ;
            cin >> a [ i ].GioiTinh ;
            cin >> a [ i ].DiemToan >> a [ i ].DiemLy >> a [ i ].DiemHoa ;
            a [ i ].DTB = ( a [ i ].DiemToan + a [ i ].DiemLy + a [ i ].DiemHoa ) / 3 ;
            cin.ignore () ;
        }
}

void Nhap( char hotencanxoa[] ) 
{
    cin.getline ( hotencanxoa , 100 ) ;
}

void Xuat ( SinhVien a[] , int n )
{
    for ( int i = 0 ; i < n ; i++ )
        {
            cout << a [ i ].MASV << '\t' << a [ i ].HoTen << '\t' << a [ i ].NgaySinh << '\t' <<  a [ i ].GioiTinh << '\t' << a [ i ].DiemToan << '\t' << a [ i ].DiemLy << '\t' << a [ i ].DiemHoa;
            cout << '\t' << setprecision ( 3 ) << a [ i ].DTB << '\n' ;
        }
}

void XoaTheoHoTen ( SinhVien a[] , int &n , char hotencanxoa[] )
{
    int x = 0 ;
    for ( int i = 0 ; i < n ; i++ )
        {
            if ( strcmp ( a [ i ].HoTen , hotencanxoa ) > 0 || strcmp ( a [ i ].HoTen , hotencanxoa ) < 0 )
                {
                    a [ x ] = a [ i ] ;
                    x++ ;
                }
        }
    n = x ; 

}

int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}
