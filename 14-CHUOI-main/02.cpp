#include <iostream>
#include <string>

using namespace std ;

void delete_space_before_and_after_word ( string &s )
{
    while ( s [ 0 ] == ' ' )
        {
            s.erase ( s.begin () ) ;
        }
    while ( s[ s.size () - 1 ] == ' ' ) 
        {
            s.erase ( s.size () - 1 ) ;
        }
}
void delete_space_between_word ( string &s )
{
    for ( int i = 0 ; i < s.size () ; i++ )
        {
            if ( s [ i ] == ' ' && s [ i + 1 ] == ' ' )
                {
                    s.erase ( s.begin() + i ) ;
                    i-- ;
                }
        }
}

int main()
{
    string s;
    getline( cin, s );
    delete_space_before_and_after_word ( s ) ;
    delete_space_between_word ( s ) ;
    cout << s;
    return 0;
}