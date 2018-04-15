#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int queries, temp, num;
    set<int> s; //Feels like using a vector to me though feel this doesn't showcase it's unique value.
    cin >> queries;
    
    for(int i = 0; i < queries; i++){
        cin >> temp >> num;
        switch(temp){
            case 1: //add element
                s.insert(num);
                break;
            case 2:
                s.erase(num);
                break;
            case 3:
                cout << (s.find(num) != s.end() ? "Yes " : "No ") << endl;  //check if finds the number in the set.
                break;
        }
    }
    
    return 0;
}
