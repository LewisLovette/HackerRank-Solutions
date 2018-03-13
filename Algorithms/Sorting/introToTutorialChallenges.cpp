#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int v, n, temp;
    cin >> v >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == v) cout << i;
    }
    
    return 0;
}
