#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, a_dash, b_dash;
    char temp;
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << "\n";
    cout << a + b << "\n";
    
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    
    cout << a << " " << b;
  
    return 0;
}
