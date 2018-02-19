#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string removeDoubles(string str){
    for(int i = 1; i < str.length(); i++){
        if(str[i] == str[i-1]){
            str.erase(i-1, 2);
        }
    }
    return str;
}

bool doublesCheck(string str){
    int doubles = 0;
    for(int i = 1; i < str.length(); i++){
        if(str[i] == str[i-1]){
            doubles++;
        }
    }
    if(doubles > 0){
        return true;   
    }
    
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    bool check = true;//as can't take str input to a boolean function that outputs bool??
    cin >> s;
    
    while(check == true){
        s = removeDoubles(s);
        check = doublesCheck(s);
    }
    if(s.empty()){
        s = "Empty String";
    }
    
    cout << s;
    
    return 0;
}
