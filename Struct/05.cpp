/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

//###INSERT CODE HERE -

void Nhap ( SinhVien &a ) 
{
    cin.getline ( a.MASV , 10 ) ;
    cin.getline ( a.HoTen , 100 ) ;
    cin.getline ( a.NgaySinh , 12 ) ;
    cin >> a.GioiTinh ;
    cin >> a.DiemToan >> a.DiemLy >> a.DiemHoa ;
    a.DTB = ( a.DiemToan + a.DiemLy + a.DiemHoa ) / 3 ;
}

void Xuat ( SinhVien a )
{
    
    cout << a.MASV << '\t' << a.HoTen << '\t' << a.NgaySinh << '\t' <<  a.GioiTinh << '\t' << a.DiemToan << '\t' << a.DiemLy << '\t' << a.DiemHoa;
    cout << '\t' << setprecision ( 3 ) << a.DTB ;
}

int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
