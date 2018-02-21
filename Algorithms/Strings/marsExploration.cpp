#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s) {
    int numBroken;
    for(int i = 2; i < s.length(); i+=3){   //starting at pos 3 and checking behind
        if(s[i] != 'S'){
            numBroken++;
        }
        if(s[i-1] != 'O'){
            numBroken++;
        }
        if(s[i-2] != 'S'){
            numBroken++;
        }
    }
    return numBroken;
}

int main() {
    string s;
    cin >> s;
    int result = marsExploration(s);
    cout << result << endl;
    return 0;
}
