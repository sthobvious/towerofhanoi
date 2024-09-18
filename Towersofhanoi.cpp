#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> t[3];
    int n;
    cout << "   Enter number of rings to move-  ";
    cin >> n;
    cout << endl;

int from = 0, to, candidate = 1, move = 0;


if ( n%2 == 0 )
    to = 2;
else
    to = 1 ;

for (int i = n ; i > 0; --i)

    t[0].push_back(i);

while ( t[1].size() != n ){

    cout << " Move# " << ++move << " Transfer ring " << candidate << " from tower " << char(from+'A') << " to tower " << char(to+'A') << "\n";


    t[to].push_back( t[from].back() ) ;
    t[from].pop_back() ;
    if( t[1].size() != n ){

        if( t[ (to+2)%3 ].empty() )
            from = ( to+1 ) % 3 ;
        else if( t[ (to+1)%3 ].empty() )
            from = ( to+2 ) % 3 ;
        else

        {

            if ( ( t[ (to+1) %3 ].back() ) < ( t[ (to+2) %3 ].back() ) )
                from = ( to+1 ) % 3 ;
            else
                from = ( to+2 ) % 3 ;
        }
        candidate = t[from].back() ;
        if( n%2 == 0 )
        {
            if ( (t[ (from+2) %3 ].empty()) || (candidate < t[ (from+2) %3 ].back()) )
                to = ( from+2 ) % 3 ;
            else
                to = ( from+1 ) % 3 ;
        }
        else
        {
            if ( (t[ (from+1) %3 ].empty()) || (candidate < t[ (from+1) %3 ].back()) )
                to = ( from+1 ) % 3 ;
            else
                to = ( from+2 ) % 3 ;


        }
    }
}

return 0;
}