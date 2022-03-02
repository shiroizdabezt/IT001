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
void Nhap (PhanSo a[], int &n )
{
    cin>>n;
    for( int i = 0 ;i < n ; i ++ )
	{
        cin >> a [ i ].ts >> a [ i ].ms;
    }
}
void Xuat (PhanSo a[],int n)
{
    for( int i = 0 ; i < n  ; i++ )
	{
    if( a[ i ].ms==0) 
		cout <<"Khong thoa yeu cau bai toan" << "\n" ;
    else if( a[i].ts % a[ i ].ms==0) 
		cout<< a[ i ].ts / a [ i ].ms<< "\n";
    else 
	{
        int l=__gcd( a[ i ].ts, a [ i ].ms);
        a[ i ].ts/=l;
        a[ i ].ms/=l;
        if( a [ i ].ms < 0 ) 
		{
			 a [ i ].ms = -( a[ i ].ms); 
			 a [ i ].ts = -( a[ i ].ts);
		}
        cout<<a [ i ].ts<< "/" <<a[ i ].ms<<"\n" ;
    }
	}
}
int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

