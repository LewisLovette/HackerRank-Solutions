#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> quickSort(vector <int> arr) {
    // Complete this function
    int p = arr[0];
    vector<int> left, equal, right, result;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < p){
            left.push_back(arr[i]);
        } else if(arr[i] > p){
            right.push_back(arr[i]);
        } else{
            equal.push_back(arr[i]);
        }
    }
    
    //Printing (works though not returning is better as this is a vector<int> function...)
    //for(int i = 0; i < left.size(); i++) cout << left[i] << " ";
    //for(int i = 0; i < equal.size(); i++) cout << equal[i] << " ";
    //for(int i = 0; i < right.size(); i++) cout << right[i] << " ";
    
    //appending vectors onto end of 'result'
    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), equal.begin(), equal.end());
    result.insert(result.end(), right.begin(), right.end());
        
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = quickSort(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}
