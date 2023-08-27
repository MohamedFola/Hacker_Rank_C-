#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string arr[12] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    
    int start, end;
    cin >> start >> end;
    
    for(int i=start; i<=end; i++)
    {
        if(i<10 && i>0)
        {
            cout << arr[i-1] << "\n";
        }
        else if(i%2 == 0)
        {
            cout << arr[9] << "\n";
        }
        else 
        {
            cout << arr[10] << "\n";
        }
    }
    
    return 0;
}
