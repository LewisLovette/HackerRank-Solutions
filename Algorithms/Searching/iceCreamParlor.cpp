#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int questions;
    cin >> questions;
    
    for(int i = 0; i < questions; i++){ //iterate for the number of questions
        int money, flavors, cost;
        vector<int> flavorCosts;
        cin >> money >> flavors;
        
        //fill vector of 'flavors' with their prices
        for(int j = 0; j < flavors; j++){
            cin >> cost;
            flavorCosts.push_back(cost);
        }
        //Test
        //for(int i = 0; i < flavors; i++) cout << flavorCosts[i] << " ";
        //cout << endl;
        
        //Compare costs to find the match
        int l = 0, j;   //iteratos
        while(l < flavors){
            j = 0;  //resetting on each loop
            while(j < flavors){ 
                if(flavorCosts[l] + flavorCosts[j] == money && l != j)  break; //comparing the costs
                j++;
            }
            if(flavorCosts[l] + flavorCosts[j] == money) break;
            l++;
        }
        cout << l+1 << " " << j+1 << endl;  //+1 as array position starts from 0 not 1
    }
    
    return 0;
}
