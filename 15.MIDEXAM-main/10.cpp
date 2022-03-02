#include<iostream>
#include<cstring>
using namespace std;

//###INSERT CODE HERE -
int countWords ( char s[] )
{
    int count = 0 ;
    for ( int i = 0 ; i < strlen ( s ) ; i++ ) 
        {
            if ( s [ i ] != ' ' && s [ i - 1 ] == ' ' )
                count ++ ;
        }
    if ( s [ 0 ] != ' ' )
        count ++ ;
    return count ;
}

int main()
{

   char s[256];
   cin.getline(s, 256);

   cout << countWords(s) << endl;
    return 0;
}
