#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int jumpingOnClouds(vector <int> c) {
    // Complete this function
    int countJumps = 1, size = c.size(), temp; //as always at least 1 jump
    for(int i = 0; i < size; i++) cout << c[i] << " ";
    cout << endl;
    
    for(int i = 0; i <= size; i++){
        temp = i+2;
        cout << i << endl;
        if(c[i+2] == 0){ 
            cout << endl << c[2] << " "<< c[i+2] << endl << endl;
            i += 2;
        } else if(c[i+1] == 0){
            i++;
            //cout << endl << c[i] << endl << endl;
        }
        
        if(i != size-1) countJumps++;
        
    }
    for(int i = 0; i < size; i++) cout << c[i] << " ";
    cout << endl;
    
    cout << "pos 2: " << c[2] << endl << endl;
    
    return countJumps;
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c);
    cout << result << endl;
    return 0;
}
