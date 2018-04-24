#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int toys, money, temp, total = 0, numOfToys = 0;
    vector<int> prices;
    
    cin >> toys >> money;
    for(int i =0; i < toys; i++){
        cin >> temp;
        prices.push_back(temp);
    }
    sort(prices.begin(), prices.end());
    
    //find smallest prices;
    for(int i = 0; i < prices.size(); i++){
        if((total+prices[i]) > money) break;
        total += prices[i];
        numOfToys++;
    }
    
    cout << numOfToys << endl;
    
    return 0;
}
