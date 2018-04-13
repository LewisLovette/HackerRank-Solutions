#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, largest = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
        cin >> arr[arr_i];
        if(arr[arr_i] > largest) largest = arr[arr_i];
    }
    
    int result[largest] = {0};  //initializing all positions in the arr with 0  
    for(int i = 0; i < n; i++) result[arr[i]]++;    //+1 to each arr[i] for the length of n.
    
    for (ssize_t i = 0; i <= largest; i++) {
        cout << result[i] << (i < largest ? " " : "");
    }
    cout << endl;


    return 0;
}
