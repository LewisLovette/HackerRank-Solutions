#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fibonacciModified(int t1, int t2, int n) {
    // Complete this function
    int count = 2, temp;
    vector<int> fibNums;
    fibNums.push_back(t1);
    fibNums.push_back(t2);
    for(int i = 0; i < fibNums.size(); i++) cout << fibNums[i] << " ";
    cout << endl;
    if(n == t1){
        return t1;
    } else if(n == t2){
        return t2;
    } else{
        while(count < n){ //Start at position 2 as 2 are already placed in the array.
            temp = (fibNums[count-1])+fibNums[count-2];
            fibNums.push_back(temp);
            count++;
        }
    }
    cout << endl;
    for(int i = 0; i < fibNums.size(); i++) cout << fibNums[i] << " ";
    cout << endl;
    
    return fibNums[count];
}

int main() {
    int t1;
    int t2;
    int n;
    cin >> t1 >> t2 >> n;
    int result = fibonacciModified(t1, t2, n);
    cout << result << endl;
    return 0;
}
