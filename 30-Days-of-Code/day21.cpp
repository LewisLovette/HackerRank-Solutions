/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here
void printArray(vector<auto> arr){  //auto for making it dynamic?
    for(int i = 0; i < arr.size(); i++){
        auto temp = arr[i]; //changes variable type as needed.
        cout << temp << endl;
    }
}