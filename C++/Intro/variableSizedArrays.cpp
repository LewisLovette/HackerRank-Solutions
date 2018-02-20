#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arrayNum, qNum, temp, newVecSize, xTemp, yTemp, answer; //num of arrays and num of questions
    cin >> arrayNum >> qNum;
    //initialise 2d vect
    vector< vector<int> > vect;
    
    //Getting nums into vector
    for(int i = 0; i < arrayNum; i++){
        cin >> newVecSize; //take length of new vector
        //create a new row
        vector<int> newRow;  //creating a new vector ROW that we'll insert into 2d vector
        
        for(int j = 0; j < newVecSize; j++){
            cin >> temp;
            newRow.push_back(temp); //adding element to the new row
        }
        vect.push_back(newRow); //adding the row vector to 2d vector
        //so each row is made beneath eachother (pushing in the new row to the vector - such a juicy dynamic array!)
    }
    
    //question answers
    for(int i = 0; i < qNum; i++){  //printing the co-ordinates for answers
        cin >> xTemp >> yTemp;
        answer = vect[xTemp].at(yTemp);
        cout << answer << endl;
    }
    
    return 0;
}
