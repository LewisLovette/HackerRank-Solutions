#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int cases, x, y, squares, squaredNum, tempSquare;
    cin >> cases;
    
    for(int i = 0; i < cases; i++){
        cin >> x >> y;
        for(int j = 0; true; j++){
            tempSquare = j*j;
            if(tempSquare >= x and tempSquare <= y){
                squares++;
            }
            if(tempSquare > y){
                break;
            }
        }
        cout << squares << endl;
        squares = 0;
    }
    
    return 0;
}
