#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int counter;
    vector<int>vect;

    cin >> counter;

    for ( int i = 0 ; i < counter ; i++ ) {
        int val;
        cin >> val;
        vect.push_back( val );
    }

    sort(vect.begin(), vect.end());

    for ( auto it:vect) {
        cout << it << " ";
    }

    return 0;
}
