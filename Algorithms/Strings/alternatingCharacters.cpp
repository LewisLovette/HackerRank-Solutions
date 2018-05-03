#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int alternatingCharacters(string s){
    // Complete this function
    int count = 0, pos = 0;
        
    while(s[pos+1] != '\0'){
        
        if(s[pos] == 'A' and s[pos+1] != 'B'){
            s.erase(pos+1, 1);
        } 
        else if(s[pos] == 'B' and s[pos+1] != 'A'){
            s.erase(pos+1, 1);
        }
        else{
            pos++;
            //cout << s << endl;
            continue;
        }
        //cout << s << endl;
        count++;
    }
    
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = alternatingCharacters(s);
        cout << result << endl;
    }
    return 0;
}
