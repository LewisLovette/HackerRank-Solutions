#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    int randArr[size]; 
    for(int i = 0; i < size; i++){
        cin >> randArr[i];
    }
    for(int j = size-1; j >= 0; j--){
        cout << randArr[j] << " ";
    }
    return 0;
}
