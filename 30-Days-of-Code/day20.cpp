#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, temp, count = 0;
    cin >> n;
    vector<int> a;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    
    for (int i = 0; i < n; i++) {
        // Track number of elements swapped during a single array traversal
        int numberOfSwaps = 0;
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
                count++;
            }
        }
        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps == 0) {
            break;
        }
    }
    cout << "Array is sorted in " << count << " swaps." << endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back()  << endl;
    
    return 0;
}
