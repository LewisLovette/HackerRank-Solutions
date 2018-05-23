#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector <int> cutTheSticks(vector <int> arr) {
    // Complete this function
    int min, check = 0, cuts = 0;
    vector<int> cutResults;
    
    while(true){
        sort(arr.begin(), arr.end());
        for(int j = 0; j < arr.size(); j++) if(arr[j] <= 0) arr.erase(arr.begin()+j);
        min = arr[0];
        
        if(check == arr.size()) break;
        
        for(int i = 0; i < arr.size(); i++){    //cutting
            arr[i] -= min;
            cuts++;
        }
        
        for(int j = 0; j < arr.size(); j++) if(arr[j] <= 0) arr.erase(arr.begin()+j);
        
        for(int x = 0; x < arr.size(); x++){
            if(arr[x] == min) check++;
        }
        
        cutResults.push_back(cuts);
        cuts = 0;
        check = 0;
    }
    
    return cutResults;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = cutTheSticks(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}