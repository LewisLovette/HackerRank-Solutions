#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int minimumDistances(vector <int> a) {
    // Complete this function
    int smallest = 0, temp = 0;
    
    for(int i = 0; i < a.size()-1; i++){    //-1 as j starts at i+1
        for(int j = i+1; j < a.size(); j++){  //start at i as previous would already be compared
            if(a[i] == a[j]){
                temp = j-i;
                if(smallest == 0) smallest = temp;
                else if(temp < smallest) smallest = temp;
            }
        }
    }
    
    return smallest > 0 ? smallest : -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = minimumDistances(a);
    cout << result << endl;
    return 0;
}

