#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long int n, countSize = 0, temp = 0, countA, sSize;   //not efficient but simple
    string s, sCopy;
    
    cin >> s >> n;
    sCopy = s;
    sSize = s.size();
    
    if(sSize <= 1){
        (s[0] == 'a') ? cout << n : cout << 0; return 0; //use of the ternary operator
    }
    
    temp = count(s.begin(), s.end(), 'a');  //equal to # of 'a' in the string
    
    while(countSize < n){
        countSize += sSize;
        countA += temp;
    }
    
    temp = n % sSize;
    
    if(n % sSize > 0) countA -= count(s.begin()+(sSize-temp)-1, s.end(), 'a');
    
    cout << countA << endl;
    
    return 0;
}
