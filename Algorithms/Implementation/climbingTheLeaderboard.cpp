#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int temp, temp2, temp3, addScore, pos = 1; //pos = 0 as can't be position 0
    cin >> temp;
    int scoreAr[temp];
    
    for(int i = 0; i < temp; i++){
        cin >> temp2;
        scoreAr[i] = temp2;
    }
    
    cin >> temp2;
    temp3 = temp;  //so temp3 is last pos in leaderboard
    
    for(int i = 0; i < temp2; i++){
        cin >> addScore;
        for(int j = 0; j < temp; j++){  //for length of size of 'scoreAr[]'
            if(j > temp3){
                break;
            }
            if(addScore < scoreAr[j]){    //checking its greater to find correct pos
                if(j <= 0){
                    pos++;
                }else if(scoreAr[j] != scoreAr[j-1]){
                    pos++;
                }
            } else{
                temp3 = j;
            }
        }
        cout << pos << endl;
        pos = 1;
    }
        
    
    return 0;
}
