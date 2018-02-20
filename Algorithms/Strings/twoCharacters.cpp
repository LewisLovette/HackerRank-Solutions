#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string removeDoubles(string str){
    for(int i = 1; i < str.length(); i++)
    {
        if(str[i] == str[i-1]){
            str.erase(remove(str.begin(), str.end(), str[i]), str.end()); //delete all instances of char
        }
    }
    return str;
}

bool doublesCheck(string str){
    int doubles = 0;
    for(int i = 1; i < str.length(); i++)
    {
        if(str[i] == str[i-1]){
            doubles++;
        }
    }
    if(doubles > 0){
        return true;   
    }
    
    return false;
}

string removeSingles(string str){
    int t;
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = 0; j < str.length(); j++)
        {
            if(str[i] == str[j] and i != j){
                t++;
            }
        }
        if(t == 0){
            str.erase(remove(str.begin(), str.end(), str[i]), str.end());
        }
        t = 0;
    }
    
    return str;
}

string patternCheck(string str){
    int t;
    for(int i = 0; i < str.length()-2; i++)
    {
        for(int j = 0; j < str.length(); j++)
        {
            if(str[i] == str[i+2] and i != j){
                t++;
            }
        }
        
        if(t == 0){
            str.erase(remove(str.begin(), str.end(), str[i]), str.end());
        }
        t = 0;
    }
    return str;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //first delete doubles then find ones +/-1 of eachother
    int throwNum, t;
    bool check = true;
    string s;
    
    cin >> throwNum >> s;
    //cout << s << endl;
    while(check == true){
        s = removeDoubles(s);
        s = removeSingles(s);
        s = patternCheck(s);
        check = doublesCheck(s);
    }
    
    //cout << s << " " << s.length();
    cout << s.length() << endl;
    return 0;
}
