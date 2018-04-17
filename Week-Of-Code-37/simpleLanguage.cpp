#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 * Complete the maximumProgramValue function below.
 */
long maximumProgramValue(int n) {
    /*
     * Write your code here.
     */
    long int y, sum, temp;
    string t;
    
    while(n > 0){
        cin >> t >> y;
        
        if(t == "add"){
            temp = sum + y;
            if(temp > sum) sum = temp;
        } else{
            temp = y;
            if(temp > sum) sum = temp;
        }
        
        n--;
    }
    
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    long result = maximumProgramValue(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
