#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size, temp;
    cin >> size;
    int ar[size];
    //input
    for(int i = 0; i < size; i++){
        cin >> temp;
        ar[i] = temp;
    }
    
    //sorting
    sort(ar, ar+size);
    
    for(int i = 0; i < size; i++){
        cout << ar[i] << " ";
    }
    
    return 0;
}
