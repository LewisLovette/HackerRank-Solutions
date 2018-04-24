#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int t, test;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> test;
        //Some base cases
        if(test == 2 ){
            cout << "Prime" << endl;
            continue;
        } else if(test == 1){
            cout << "Not prime" << endl;
            continue;
        }
        //prime can't be divisible by anything > sqrt(test) --- main loop
        for(int copy = sqrt(test); copy > 1; copy--){
            if(copy%2 == 0 and copy != 2){  //checking even
                continue;
            }
            else if(test%copy == 0){    //checking non even
                cout << "Not prime" << endl;
                break;
            }
            else if(copy == 2){ //if passes all checks then the number is prime
                cout << "Prime" << endl;
            }
        }
    }
    
    return 0;
}
