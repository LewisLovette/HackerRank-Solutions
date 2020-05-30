#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int result = 0;

    map<char, int> aMap;
    map<char, int> bMap;

    //Go through a and create map, step through b and decriment/incriment result
    for(int i = 0; i < (int)a.size(); i++){
        if(aMap.find(a.at(i)) != aMap.end()){  //exists
            aMap[a.at(i)]++;
        }
        else{
            aMap[a.at(i)] = 1;
        }
    }
    for(int i = 0; i < (int)b.size(); i++){
        if(aMap.find(b.at(i)) != aMap.end() && aMap[b.at(i)] > 0){  //exists+space

            aMap[b.at(i)]--;
        }
        else{
            result++;
        }
    }


    //add all unused ints as they are not needed for the anagram
    for (auto const& it : aMap)
    {
        result += it.second;
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
