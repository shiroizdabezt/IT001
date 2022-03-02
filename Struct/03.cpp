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

PS Cong ( PS a , PS b ) 
{
    PS kq ;
    kq.ms = a.ms * b.ms ;
	kq.ts = a.ts*b.ms + b.ts*a.ms ;
    
    return kq ;
}

void Xuat ( PS kq ) 
{
    if( kq.ts % kq.ms==0) 
		cout<< kq.ts / kq.ms ;
    else 
	{
        int l=__gcd( kq.ts, kq.ms);
        kq.ts/=l;
        kq.ms/=l;
        if( kq.ms < 0 ) 
		{
			 kq.ms = -( kq.ms); 
			 kq.ts = -( kq.ts);
		}
        cout<< kq.ts<< "/" << kq.ms ;
    }
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}
