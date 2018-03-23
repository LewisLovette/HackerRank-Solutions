#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size, temp, count;  //set to 2 for first as always search
    cin >> size;
    vector<int> vec;
    
    //input to vec
    for(int i = 0; i < size; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    //For Insersion Sort - Finds unsorted number, moves larger numbers ahead +1 (when true) then places in pos (when not true)
    for(int i = 1; i < size; i++){
        if(vec[i] < vec[i-1]){  //Means the number is unsorted
            temp = vec[i];  //first swap as condition is true
            vec[i] = vec[i-1];
            for(int j = i; j > 0; j--){
                if(temp < vec[j] and temp > vec[j-1]){    //First run will be the number we're sorting
                    vec[j] = temp;
                    break;
                }else if(j == 1 and temp < vec[0]){ //For when first position
                    vec[1] = vec[0];
                    vec[0] = temp;
                }else{  //If no condition is met, will move
                    vec[j] = vec[j-1];
                }
                count++;
            }
            if(i == 1 and temp < vec[i]){   //For swapping 2nd with 1st position
                vec[0] = temp;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}