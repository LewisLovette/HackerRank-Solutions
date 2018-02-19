#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int wordNum = 1;
    string s;
    cin >> s;
    for(int i = 0; i < s.length();i++){
        if(isupper(s[i])){
            wordNum++;
        }
    }
    
    cout << wordNum++;
    
    return 0;
}
