#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int temp, temp2, lastPos, addScore, numOfPos = 1; //pos = 0 as can't be position 0, lastPos = 0 as first run
    cin >> temp;
    int scoreAr[temp];
    
    for(int i = 0; i < temp; i++){
        cin >> temp2;
        scoreAr[i] = temp2;
    }
    
    //figuring our number of positions
    for(int i = 1; i < temp; i++){
        if(scoreAr[i] != scoreAr[i-1]){
            numOfPos++;
        }
    }
    //cout << "Number of Positions: " << numOfPos << endl;
    
    cin >> temp2; 
    lastPos = temp-2;  //-1 as it's an array.
    bool first = true;
    for(int i = 0; i < temp2; i++){
        cin >> addScore;

        //working from back of array to front for faster processing.
        if(addScore < scoreAr[temp-1] and first == true){
            numOfPos++;
            first = false;
        }
        
        for(int j = lastPos; j > 0; j--){
            if(addScore > scoreAr[j]){
                if(scoreAr[j] != scoreAr[j+1]) numOfPos--;
                else if(j == 0) numOfPos--; //for when we are at beggining of arr it can still find correct pos
            }
            if(addScore < scoreAr[j]){
                lastPos = j+1;
                break;
            }
        } 
        if(numOfPos  < 1) numOfPos = 1;
        cout << numOfPos << endl;
    }
        
    
    return 0;
}
