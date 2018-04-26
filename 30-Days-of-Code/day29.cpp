#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, n, k, temp;
    vector<int> setN;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int max = 0;
        cin >> n >> k;
        //Checking each number against eachother and testing max j&y that's less than k
        for(int j = 1; j <= n; j++){
            for(int y = 1; y < n; y++){
                if(j != y){
                    temp = j&y;
                    if(temp > max and temp < k) max = temp;
                }
            }
        }
        cout << max << endl;
    }

    return 0;
}
