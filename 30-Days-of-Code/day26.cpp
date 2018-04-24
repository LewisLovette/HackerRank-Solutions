#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int fine, expectD, expectM, expectY, actualD, actualM, actualY;
    cin >> actualD >> actualM >> actualY;   //actual dates
    cin >> expectD >> expectM >> expectY;   //expected dates
    
    //'actual - expected' shows us if books are overdue (if not overdue, will be in the minus)
    int day = actualD - expectD, month = actualM - expectM, year = actualY - expectY;
    
    //In order of year->month->day, checks that previous == 0 as it means it's the same month! 
    if (year > 0) {
        fine = 10000;
    }
    else if (month > 0 and year == 0) {
        fine = 500 * month;
    }
    else if (day > 0 and month == 0 and year == 0) {
        fine = 15 * day;
    }
    else{
        fine = 0;
    }

    cout << fine << endl;
    
    return 0;
}
