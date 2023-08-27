#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main () {
    int n, q, counter, val, x, y;
    vector<vector<int>> vect;
    int f , s;
    vector<int> vectTemp;

    cin >> n >> q;

    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> counter;

        for ( int j = 0 ; j < counter ; j++ )
        {
            cin >> val;
            vectTemp.push_back(val);
        }

        vect.push_back(vectTemp);
        vectTemp.clear();
    }

    for ( int j = 0 ; j < q ; j++ )
    {
        cin >> f >> s;
        cout << vect[f][s] << "\n";
    }
    

}

