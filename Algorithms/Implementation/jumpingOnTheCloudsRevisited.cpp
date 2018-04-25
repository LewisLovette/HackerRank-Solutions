#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int k) {
    // Complete this function
    int energy = 100, count = 0;
    while(count != c.size()) //if same size, means we landed back on pos 0
    {   
        if(count > c.size()) count -= c.size();  //means it's circular 
        if(c[count] == 1) energy -= 2;  //Thunderhead jump means -2
        
        energy -= 1;
        count += k; //jump
    }
    
    return energy;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}
