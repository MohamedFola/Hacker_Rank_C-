#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		cout << hex << showbase << nouppercase << left << long(A) << endl;
        cout << showpos << setw(15) << setprecision(2) << fixed << right << setfill('_') << B << endl;
        cout << uppercase << noshowpos << setprecision(9) << scientific << C << endl;
	}
	return 0;

}