#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findGrowth(int cycles){
    int x = 1;  //initial height of tree
    for(int i = 1; i <= cycles; i++){
        if(i%2 == 1) x *= 2;    //odd is spring cycle
        else x++;
    }
    
    return x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int temp, temp2, cycles;
    cin >> temp;
    
    for(int i = 0; i < temp; i++){
        cin >> cycles;
        temp2 = findGrowth(cycles);
        cout << temp2 << endl;
    }
    return 0;
}
