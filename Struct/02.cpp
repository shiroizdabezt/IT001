/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include<iostream> 
#include<algorithm>
using namespace std; 
int MAXN = 101 ;
typedef struct PhanSo 
     { 
        int ts; 
        int ms; 
      }PS; 
void Nhap (PhanSo &a )
{
    cin >> a.ts >> a.ms ;
}

PS Nhap () 
{
    PS b ;
    cin >> b.ts >> b.ms ;
    return b ;
}

PS Toigian ( PS a )
{
    int x ;
    if ( a.ts % a.ms == 0 )
        {
            a.ts = a.ts / a.ms ;
            return a ;
        }
    else 
	{
        int l=__gcd( a.ts , a.ms);
        a.ts/= l ;
        a.ms/= l ;
        if( a.ms < 0 ) 
		{
			 a.ms = -( a.ms); 
			 a.ts = -( a.ts);
		}
        return a ;
    }

}

int SoSanh ( PS a , PS b ) 
{
    Toigian ( a ) ;
    Toigian ( b ) ;
    float sol1 = 1.0 *  a.ts / a.ms  ;
    float sol2 = 1.0 *  b.ts / b.ms  ;
    if ( sol1 - sol2 > 0 )
        return 1 ;
    else if ( sol1 - sol2 < 0 )
        return -1 ;
    return sol1 - sol2 ;
}


int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
