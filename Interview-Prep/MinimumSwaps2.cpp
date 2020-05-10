#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
    int result = 0;
    int tempVal = 0;
    int tempPair = 0;
    int tempValPos = 0;
    map<int, int> vals; //key is value, pair is position

    //make key value pairs
    for(int i = 0; i < arr.size(); i++){
        vals[arr[i]] = i;
    }

    for(int i = 0; i < arr.size()-1; i++){ 
        
        if(arr[i] != i+1){

            //Setup for swapping dic + array
            tempValPos = vals[i+1];

            //arr swap
            tempVal = arr[i];
            arr[i] = arr[tempValPos];
            arr[tempValPos] = tempVal;

            //dic swap
            vals[i+1] = i; 
            vals[arr[tempValPos]] = tempValPos;
            
            result++;
            
        }

        // for (int j = 0; j < arr.size(); j++) {
        //     cout << arr[j] << " ";
        // }
        // cout << "\n";
              
    }
    

    // for ( auto item : vals )
    // {
    //     //item.first is the key
    //     cout << "Key: " << item.first << " Pair: " << item.second << "\n";

    // }

    // for(int i = 0; i < arr.size()-1; i++){ 
        
    //     if(arr[i] != i+1){
    //         for(int j = i+1; j < arr.size(); j++){

    //             //swap
    //             if(arr[j] == i+1){

    //                 tempVal = arr[i];

    //                 arr[i] = arr[j]; 
    //                 arr[j] = tempVal; 

    //                 result++;

    //                 break;
    //             }
    //         }
            
    //     }
              
    // }


    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = minimumSwaps(arr);

    fout << res << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
