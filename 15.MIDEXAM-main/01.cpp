#include <iostream>
#include <math.h>

using namespace std;

//###INSERT CODE HERE -
void inputArray ( int car[] , int &n )
{
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ )
        {
            cin >> car [ i ] ;
        }
}

int totalFine ( int car[] , int n , int date , int fine )
{
    int count = 0 ;
    for ( int i = 0 ; i < n ; i++ )
        {
            if ( date % 2 == 0 )
                {
                    if ( car [ i ] % 2 == 0 )
                        continue ;
                    else 
                        count ++ ;
                }
            else 
                {
                   if ( car [ i ] % 2 != 0 )
                        continue ;
                    else 
                        count ++ ; 
                }
        }
    fine = fine * count ;
    return fine ;
}

int main()
{
    int car[100],n;
    inputArray(car,n); // Nhap so luong xe va mang cac bien so xe

    int date; cin>>date; // nhap ngay
    int fine; cin>>fine; //so tien phat cho moi xe khi vi pham, fine = 250

    //Goi ham tinh tong so tien phat thu ve trong ngay
    cout << totalFine(car, n, date, fine);

    return 0;
}