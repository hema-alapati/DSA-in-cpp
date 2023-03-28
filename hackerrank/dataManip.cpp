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
        cout << left << nouppercase << hex << showbase << (long long)A << endl;
        cout << right << setfill('_') << setw(15) << setprecision(2) << fixed << showpos << B << endl;
        cout << left << uppercase << setprecision(9) << scientific << noshowpos << C << endl;
		/* Enter your code here */

	}
	return 0;

}