#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//completes first test but not other hmm, weird issues popping up with this
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int temp, temp2, addScore, pos = 1, aliceScore; //pos = 0 as can't be position 0
    cin >> temp;
    
    int scoreAr[temp];
    
    for(int i = 0; i < temp; i++){
        cin >> temp2;
        scoreAr[i] = temp2;
    }
    
    cin >> temp2;
    
    for(int i = 0; i < temp2; i++){
        cin >> addScore;
        aliceScore += addScore;
        for(int j = 0; j < temp; j++){  //for length of size of 'scoreAr[]'
            if(aliceScore < scoreAr[j]){    //checking its greater and if score duplicate
                if(j <= 0){
                    pos++;
                }else if(scoreAr[j] != scoreAr[j-1]){
                    pos++;
                }
                cout << "";
            }
        }
        cout << pos << endl;
        pos = 1;
    }
        
    
    return 0;
}
