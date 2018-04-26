#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    string name, email;
    vector<string> info;
    cin >> t;
    
    regex e(".+@gmail\\.com$");   //set the expression
    
    for(int i = 0; i < t; i++){
        cin >> name >> email;
        bool match = regex_match(email, e); //then match the string to the expression 'e'
        
        if(match) info.push_back(name);   //main the name to the email (so duplicate names don't replace email.)
    }
    //sort and print
    sort(info.begin(), info.end());
    for(auto it = info.begin(); it != info.end(); it = next(it)) cout << *it << endl;
    
    return 0;
}
