#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n, j;
        cin >> n >> j;
    for(n; n <= j ;n++){
        string numWord;

        if(n == 1){
            numWord = "one";
        } else if(n == 2){
            numWord = "two";
        }else if(n == 3){
            numWord = "three";
        }else if(n == 4){
            numWord = "four";
        }else if(n == 5){
            numWord = "five";
        }else if(n == 6){
            numWord = "six";
        }else if(n == 7){
            numWord = "seven";
        }else if(n == 8){
            numWord = "eight";
        }else if(n == 9){
            numWord = "nine";
        } else{
            if(n % 2 == 0){
               numWord = "even";
            } else{
                numWord = "odd";
            }
        }

        cout << numWord << endl;
    }
    return 0;
}
