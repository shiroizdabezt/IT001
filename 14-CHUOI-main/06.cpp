/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>
using namespace std;

//###INSERT CODE HERE -

bool isRepeat ( string s )
{
    int len = s.length() / 2 ;
    if ( len % 2 != 0 )
        return false ;
    else if ( len % 2 == 0 )
        if ( s.substr ( 0 , len ) == s.substr ( len , s.length () ) ) 
            return true ;
        else 
            return false ;
}

int main ()
{
    string inputString;
    getline(cin,inputString);
    cout<< isRepeat(inputString) ;
    return 0;
}
