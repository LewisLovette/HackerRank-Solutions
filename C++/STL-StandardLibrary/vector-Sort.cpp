#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size, temp;
    vector<int> vec;
    
    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    
    for(int i = 0; i < size; i++) cout << vec[i] << " ";    //printing
    
    return 0;
}
