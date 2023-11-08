#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, number, Q;
    vector<int>v;
    auto it = v.begin();

    cin >> N;

    for( int i = 0 ; i < N ; i++ )
    {    
        cin >> number;
        v.emplace_back(number);
    }

    // for( auto it : v )
    //     cout << it << endl;

    cin >> Q;

    for( int i = 0 ; i < Q ; i++ )
    {
        cin >> number;
        auto it = lower_bound(v.begin(), v.end(), number);
        int index = it - v.begin();
        if( v[index] > number )
        {
            cout << "No " << ( index + 1 ) << endl;
        }
        else
        {
            cout << "Yes " << ( index + 1 ) << endl;
        }
    }
    

    return 0;
}

/*
8
1 1 2 2 6 9 9 15
4
1
4
9
15
*/
