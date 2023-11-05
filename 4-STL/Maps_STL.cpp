#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int counter, decision, grade;
    string name;
    cin >> counter;
    map<string,int>m;
    auto it = m.end();

    for(int i=0; i<counter; i++)
    {
        cin >> decision;

        switch (decision)
        {
        case 1:
            cin >> name >> grade;
            it = m.find(name);
            if(it != m.end())
            {
                it->second += grade;
            }
            else
            {
                m.insert(make_pair(name, grade));
            }
            break;

        case 2:
            cin >> name;
            it = m.find(name);
            if(it != m.end())
            {
                m.erase(name);
            }
            break;

        case 3:
            cin >> name;
            it = m.find(name);
            if(it != m.end())
            {
                cout << m.at(name) << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            break;
        }
    }

    return 0;
}
