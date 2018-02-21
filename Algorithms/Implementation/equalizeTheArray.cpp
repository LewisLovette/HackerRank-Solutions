#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size = 0, temp = 0, large = 1, largeNum = 0, numDelete = 0;  //large as largest num means least deletes
    cin >> size;
    
    //setting up vector
    vector<int> vect;
    for(int i = 0; i < size; i++){
        cin >> temp;
        vect.push_back(temp);
    }
    //checking which element has most duplicates
    for(int i = 0; i < vect.size(); i++){
        for(int j = 0; j < vect.size(); j++){
            if(vect[i] == vect[j] and i != j){
                large++;
            }
        }
        if(large > largeNum){
            temp = vect[i];
            largeNum = large;
        }
        large = 1;
    }
    
    
    numDelete = size - largeNum;    //then delete the highest # of duplicates and subtract from original size of vect
    
    cout << numDelete;
    
    return 0;
}
