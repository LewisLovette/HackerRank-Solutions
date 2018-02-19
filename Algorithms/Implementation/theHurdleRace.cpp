#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int temp, hurdles, maxHeight, highest, mBeverages, hHeight[hurdles];
    cin >> hurdles >> maxHeight;
    
    for(int i = 0; i < hurdles; i++){
        cin >> temp;
        if(temp > highest){
            highest = temp;
        }
    }
    
    if(highest > maxHeight){
        mBeverages = highest - maxHeight;
    } else{
        mBeverages = 0;
    }
    
    cout << mBeverages;
    
    return 0;
}
