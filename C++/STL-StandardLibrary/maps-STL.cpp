#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int queries, temp, marks;
    string name;
    map<string, int> m;     //Creates a map m where key_type is of type string and data_type is of type int.
    cin >> queries;
    
    for(int i = 0; i < queries; i++){
        cin >> temp >> name;
        switch(temp){
            case 1:
                cin >> marks;
                m[name] += marks;   //Like a python dictionary (adding onto the data (the int)).
                break;
            case 2:
                m[name] = 0;    //instead of erasing it means we can still access the name but the marks are 0
                break;
            case 3:
                //Redundant since we manually change to 0 - used for when we don't change to 0 - keep around as interesting
                //auto prtMarks = m.find(name);
                //if(prtMarks->second != 0){
                //    cout << prtMarks->second << endl;
                //} else cout << 0 << endl;
                
                cout << m[name] << endl;
                break;
        }
    }
    
    return 0;
}
