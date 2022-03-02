#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1, 254);
	cin.getline(s2, 254);
	bool kt = myStrcat(s1, s2);

//###INSERT CODE HERE -
	if ( kt == false )
		cout << "Khong noi duoc. Khong du bo nho.";
	else 
		cout << s1 ;

}
int myStrlen ( char s[] )
{
	int i = 0 ;
	while ( s[i] != '\0' )
		{
			i++; 
		}
	return i ;
} 

bool myStrcat ( char s1[] , char s2[] )
{
	int a = myStrlen ( s1 ) ;
	int b = myStrlen ( s2 ) ;
    int i , j = 0 ;
	if ( a + b > 254 )
		{    
            return false ;
        }
    else 
		{  
		    for ( i = a ; i <= a + b ; i++ )
			    {
                    s1 [ i ] = s2 [ j ] ;
                    j++ ;
				}
				s1 [i] = '\0' ;
				return true
        }
}

/* }
int myStrlen ( char s[] )
{
	int i = 0 ;
	while ( s[i] != '\0' )
		{
			i++; 
		}
	return i ;
}

bool myStrcat ( char s1[] , char s2[] )
{
	int a = myStrlen ( s1 ) ;
	int b = myStrlen ( s2 ) ;
	int j ;
	if ( a + b > 254 )
		{    
            cout << "Khong noi duoc. Khong du bo nho.";
            return 0 ;
        }
    else 
		{   for ( int  i = 0 ; i <= a ; i++ )
			    cout << s1[i] ;
		    for ( j = 0 ; j <= b ; j++ )
			    cout << s2[j] ;
			if ( s2[j] == b+1 ) 
				s2[j] = '\0' ;
				cout << s2[j] ;
            return 1 ;
        }
} */