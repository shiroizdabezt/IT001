/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	cin.getline(s, 299);
	cin.getline(s1, 299);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{
		ChenChuoiTaiVitriK ( s , s1 , k ) ;
	}
	return 0 ;
}
//###INSERT CODE HERE -
int myStrlen ( char s[] , int k )
{
	k = 0 ;
	while ( s[k] != '\0' )
		{
			k++; 
		}
	return k ;
} 

void myStrcpy(char s[], int vt, char s1[], int k)
{
	int i ;
	for ( i = 0 ; i < k ; i++ )
		s1 [ i ] = s [ i + vt ] ;
	s1[i] = '\0';
}

bool myStrcat(char s1[], char s2[])
{
	int a = myStrlen ( s1 , 0 ) ;
	int b = myStrlen ( s2 , 0 ) ;
    int i , j = 0 ;
	if ( a + b > 254 )
		{    
            return false ;
        }  
		    for ( i = a ; s2[j] != '\0' ; i++ )
			    {
                    s1 [ i ] = s2 [ j ] ;
                    j++ ;
				}
				s1 [i] = '\0' ;
				return true ;

}

void ChenChuoiTaiVitriK(char s[], char s1[], int k )
{	
	char s2 [ 300 ] , s3 [ 300 ];
	int  len = myStrlen ( s , 0 ) ;
	myStrcpy ( s , k ,  s2 , len ) ;
	myStrcpy ( s , 0 , s3 , k  ) ; 
	myStrcat ( s3 , s1 ) ;
	myStrcat ( s3 , s2 ) ;
	cout << s3 ;
}