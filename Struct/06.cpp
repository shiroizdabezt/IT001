/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iomanip>
#include <iostream>
#include <stdio.h>
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

void Xuat ( SinhVien a[] , int n )
{
    for ( int i = 0 ; i < n ; i++ )
        {
            cout << a [ i ].MASV << '\t' << a [ i ].HoTen << '\t' << a [ i ].NgaySinh << '\t' <<  a [ i ].GioiTinh << '\t' << a [ i ].DiemToan << '\t' << a [ i ].DiemLy << '\t' << a [ i ].DiemHoa;
            cout << '\t' << setprecision ( 3 ) << a [ i ].DTB << '\n' ;
        }
}

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
