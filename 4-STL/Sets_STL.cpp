#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int iterations, decision, number;
    auto it = s.begin();

    cin >> iterations;

    for ( int i = 0 ; i < iterations ; i++ )
    {
        cin >> decision;

        switch ( decision )
        {
        case 1:
            cin >> number;
            s.insert(number);
            break;

        case 2:
            cin >> number;
            it = s.find(number);

            if ( it != s.end() )
            {
                s.erase(number);
            }
            else
            {
                /* DO NOTHING */
            }

            break;

        case 3:
            cin >> number;
            it = s.find(number);

            if ( it != s.end() )
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }

            break;
        }
    }

    return 0;
}



