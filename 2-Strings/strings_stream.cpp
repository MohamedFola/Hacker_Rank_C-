#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss( str );
    vector<int> vect;
    
    while(ss.good()) { 
        string substr;
        getline(ss, substr, ',');
        vect.push_back( stoi(substr) );
    }

    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}