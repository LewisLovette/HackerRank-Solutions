#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int viralAdvertising(int n) {
    // Complete this function
    int recipients = 5, likedAd = floor(recipients/2);
    
    for(int i = 1; i < n; i++){ //start at day 2 as we hard calc day 1
        recipients = floor(recipients/2) * 3;
        likedAd += floor(recipients/2);
    }
    
    return likedAd;
}

//taken from C++ code as not given for c++14
int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}
