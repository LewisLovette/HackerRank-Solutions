#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    // your code goes here
    string numWord;
    if(n == 1){
        numWord = "one";
    } else if(n == 2){
        numWord = "two";
    }else if(n == 3){
        numWord = "three";
    }else if(n == 4){
        numWord = "four";
    }else if(n == 5){
        numWord = "five";
    }else if(n == 6){
        numWord = "six";
    }else if(n == 7){
        numWord = "seven";
    }else if(n == 8){
        numWord = "eight";
    }else if(n == 9){
        numWord = "nine";
    } else{
        numWord = "Greater than 9";
    }
    
    cout << numWord << endl;
    
    return 0;
}
