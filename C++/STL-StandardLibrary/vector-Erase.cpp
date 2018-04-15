#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size, temp, eraseOne, eraseRange1, eraseRange2;
    vector<int> vec;
    
    cin >> size;
    for(int i =0; i < size; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    
    cin >> eraseOne >> eraseRange1 >> eraseRange2;  //get all variable then we can work with them.
    
    vec.erase(vec.begin()+eraseOne-1);
    vec.erase(vec.begin()+eraseRange1-1, vec.begin()+eraseRange2-1);    //erase from the begging (0) + position - 1 
                                                                                                //(so correct for array)
    
    cout << vec.size() << endl;
    for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
    
    return 0;
}
