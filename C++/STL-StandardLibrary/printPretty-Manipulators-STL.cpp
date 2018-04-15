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

		//Discussion does such a good job of explaining - simple once you read (just what you want followed by variable...)
        //so this is taken from there. Explained it too much, feels redundant to do this task now.
        // LINE 1 
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part

        }
	return 0;

}