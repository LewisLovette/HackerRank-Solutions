#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int cases, toTest, temp, tempCopy, tempMod10, evenlyDiv;
    cin >> cases;
    
    for(int i = 0; i < cases; i++){
        cin >> temp;
        tempCopy = temp;
        while(tempCopy > 0){
            tempMod10 = tempCopy%10;
            tempCopy /= 10;
            if(tempMod10 == 0) continue;
            if(temp % tempMod10 == 0){
                evenlyDiv++;
            }
        }
        cout << evenlyDiv << endl;
        evenlyDiv = 0;
    }
    
    return 0;
}
