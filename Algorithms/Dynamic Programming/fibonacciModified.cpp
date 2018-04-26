#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fibonacciModified(int t1, int t2, int n) {
    // Complete this function
    int count = 2;
    long int temp;
    vector<long int> fibNums;
    fibNums.push_back(t1);
    fibNums.push_back(t2);

    if(n == t1){
        return t1;
    } else if(n == t2){
        return t2;
    } else{
        while(count < n){ //Start at position 2 as 2 are already placed in the array.
            temp = pow(fibNums[count-1], fibNums[count-1])+fibNums[count-2];
            cout << temp << endl;
            fibNums.push_back(temp);
            count++;
        }
    }
    //-1 as count goes to n, so adjust for array.
    return fibNums[count-1];
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
