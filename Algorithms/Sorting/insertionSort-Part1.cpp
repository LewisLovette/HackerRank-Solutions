#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, sizeCopy, temp, newNum;  //set to 2 for first as always search
    bool sorted = false;
    cin >> size;
    vector<int> vec;
    
    //input to vec
    for(int i = 0; i < size; i++){
        if(i == size-1){
            temp = vec.back();
            vec.push_back(temp); //duplicate last
            cin >> newNum;
        }
        cin >> temp;
        vec.push_back(temp);
    }
    
    sizeCopy = size-2;    //2nd to last position in array as last pos is always in last position
    while(true){
        if(sizeCopy < 0){
            vec.at(0) = newNum;   //as only possible place it can be
            for(int i = 0; i < size; i++) cout << vec[i] << " ";
            break;
        }
        
        if(vec.at(sizeCopy) > newNum){//swap & print
            temp = vec.at(sizeCopy);
            vec.at(sizeCopy+1) = temp;
            for(int i = 0; i < size; i++) cout << vec[i] << " ";
            cout << endl;
        } else{ //if not larger means that's where the number fits
            vec.at(sizeCopy+1) = newNum;
            for(int i = 0; i < size; i++) cout << vec[i] << " ";
            break;
        }
        
        sizeCopy--;
    }
    
    return 0;
}
