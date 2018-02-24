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
using namespace std;

int hourGlass(vector<vector<int>> ar){
    int sum, largest = 0, count = 0;
    for(int i = 0; i < ar[i].size()-2; i++){
        for(int j = 0; j < ar[j].size()-2; j++){    //vectors/arrays ect. are ar[row][col]
            sum = ar[i][j] + ar[i][j+1] + ar[i][j+2];    //top row 
            sum+= ar[i+1][j+1];  //middle row
            sum += ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];   //bottom row
            if(sum > largest) largest = sum;
            if(i == 0 and j == 0) largest = sum;  //for negatives
            //count++;
            //cout << count << ": " << sum << ": " << largest << endl;
        }
        sum = 0;
    }
    cout << largest << endl;
    return largest;
}

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    hourGlass(arr);
    
    return 0;
}
