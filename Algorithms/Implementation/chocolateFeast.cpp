#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, money, price, wNeeded, wrappers, freeChoc, chocEaten;   //wNeeded = wrappers needed for free choc.
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> money >> price >> wNeeded;
        //divides and floor the number(as it's an int), showing how many times 'price' goes into 'money'
        wrappers = money/price;       
        freeChoc = wrappers/wNeeded;  //and so on
        
        chocEaten = wrappers+freeChoc;
        wrappers -= wrappers/wNeeded;   //leftover wrappers
        //For wrappers gained from free choc
        wrappers += freeChoc;  //as we used all but then get more wrappers from the free wrapper
        while(wrappers > wNeeded){
            freeChoc = wrappers/wNeeded;
            chocEaten += freeChoc;
            wrappers -= wrappers/wNeeded;    //leftover wrappers
        }
        
        cout << chocEaten << endl;
    }
    
    
    return 0;
}
