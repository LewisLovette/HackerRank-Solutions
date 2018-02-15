#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string line1, line2;
    cin >> line1 >> line2;
    cout << line1.length() << " " << line2.length() << endl;
    cout << line1 << line2 << endl;  
    
    string hold = line1;
    line1[0] = line2[0];
    line2[0] = hold[0];
    
    cout << line1 << " " << line2 << endl;
    
    return 0;
}
