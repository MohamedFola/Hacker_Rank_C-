#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int counter;
    int erasePos, eraseRange1, eraseRange2;
    vector<int>v;

    cin >> counter;
    for(int i = 0; i< counter ; i++){
        int val;
        cin >> val;
        v.push_back(val);
    }

    cin >> erasePos;
    v.erase(v.begin()+(erasePos-1));
    
    cin >> eraseRange1 >> eraseRange2;
    v.erase(v.begin()+(eraseRange1-1),v.begin()+(eraseRange2-1));


    cout << v.size() << "\n";
    for(auto it:v){
        cout << it << " ";
    }

    return 0;
}
