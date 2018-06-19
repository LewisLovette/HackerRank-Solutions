#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minuteToWinIt function below.
int minuteToWinIt(vector<int> a, int k) {
    //V2 - Brute force approach - Unlikely to meet time requirements.
    int sMins = 0, backMins = 0, forwardMins = 0, difference;
    int size = a.size();
    //Main loop to test each position.
    for(int i = 0; i < size; i+=4){
        //back
        if(i > 0){
            for(int back = i-1; back >= 0; back--){
                difference = i-back;
                                
                if(a[back] != a[i]-(difference*k)){
                    //a[back] = a[i]-difference*k;  -- Don't actually need to change
                    backMins++;
                }
            }
        }
        
        //forward
        if(i < size-1){
            for(int forward = i+1; forward < size; forward++){
                difference = forward-i;

                if(a[forward] != a[i]+(difference*k)){
                    //a[forward] = a[i]+difference*k;   -- Don't actually need to change
                    forwardMins++;
                }
            }
        }
        
        //Comparing for smallest.
        if(i == 0){
            sMins = forwardMins+backMins;
        } 
        else if(forwardMins+backMins < sMins){
            sMins = forwardMins+backMins;
        }
        
        forwardMins = 0;
        backMins = 0;
    }
    
    return sMins;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = minuteToWinIt(a, k);

    fout << result << "\n";

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
