#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int result = -81;    //-9*-9 is lowest value
    int tempResult = 0;
    
    for(int i = 0; i < (int)arr.size()-2; i++){  //keep within bounds
    
        for(int j = 1; j < (int)arr.size()-1; j++){

            tempResult = arr[i][j-1] + arr[i][j] + arr[i][j+1];
            tempResult += arr[i+1][j];
            tempResult += arr[i+2][j-1] + arr[i+2][j] + arr[i+2][j+1];

            if(tempResult >= result) result = tempResult;
            cout << tempResult << '\n';
        }        
    }

    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
