#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Self converted to C++14 from C++
void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    for(i = 1; i < N; i++)
    {
        value=arr[i];
        
        j = i - 1;
        while(j >= 0 && value < arr[j])  //Invariant: 'j >= 0' - as this means all elements of the array are checked from j to 0. 
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }

        arr[j+1] = value;
    } 
    
    //Printing array
    for(j = 0; j < N ; j++)
    {
        cout << arr[j] << " ";
    }
}
int main() {

    int N;
    cin >> N;
    int arr[N], i;
    for(i = 0; i < N; i++) {
        cin >> arr[i];
    }

    insertionSort(N, arr);

    return 0;
}
