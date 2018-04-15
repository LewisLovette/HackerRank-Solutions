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
    
    int queries, y;
    cin >> queries;
    
    for(int i = 0; i < queries; i++){
        cin >> y;
        //Set auto so it can be whatever type it spits out
        auto lBound = lower_bound(vec.begin(), vec.end(), y);
        
        //Use pointer as it creates a 'ForwardIterator' type (see lower_bound cplusplus.com page) so we point to the value instead.
        cout << (*lBound == y ? "Yes " : "No ") << lBound-vec.begin()+1 << endl;
        //Note: lBound-vec.begin()+1   shown in the same link, means iterator position is displayed instead of the value.
        //Not too sure why, a little thing that I want to know. (note + 1 is to correct array to normal counting)
    }
            
    //Old version.
    //(*lBound == y) ? cout << "Yes " << *lBound : cout << "No " << *lBound;
    //cout << endl;
    
    return 0;
}
