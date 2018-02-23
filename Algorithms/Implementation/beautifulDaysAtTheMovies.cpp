#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int x){
    int remainder, reverse = 0;
    while(x > 0){
        remainder = x %10;
        reverse = reverse*10 + remainder;
        x = x/10;
        
    }
    //cout << reverse << endl;

    return reverse;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j, k, reversed, count;
    double beautifulNum;
    cin >> i >> j >> k;
    
        
    for(i; i <= j; i++){
        reversed = reverse(i);
        beautifulNum = (float)(i-reversed)/(float)k;
        if(floor(beautifulNum) == beautifulNum){
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
