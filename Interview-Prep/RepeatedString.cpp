#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long result = 0;

    long intoS = 0;
    long numA = 0;
    long extraA = 0;
    long pos;
    intoS = n/s.size();

    if(n > s.size()){
        for(long i = 0; i < s.size(); i++) if(s.at(i) == 'a') numA++;
    
        for(long i = s.size()*intoS; i < n; i++){
            if(s.at(pos) == 'a') extraA++;
            pos++;
        }

        result = intoS*numA + extraA;

        return result;
    }
    else{
        for(long i = 0; i < n; i++) if(s.at(i) == 'a') result++;
        return result;
    }
        

} 

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
