#include <bits/stdc++.h>

using namespace std;

//Created
float roundHalfUp(float x){ //Correct to 2 decimal places
    float temp2;
    int temp = 0;
    
    temp = (int)(x*1000)%10; //see thousandth decimal place
    
    if(temp != 0){
        if(temp > 0 && temp < 5) {  //rounding down
            temp2 = (float)temp/1000;
            x -= temp2;
        } else if(temp >= 5){    //rounding up
            temp2 = (10.0-(float)temp)/1000;
            x += temp2;
        }
    }
    
    return x;
}

// Complete the averageOfTopEmployees function below.
void averageOfTopEmployees(vector<int> rating) {
    float sum = 0;
    int toDivide = 0;   //save memory
    
    //Taking numbers >= 90 while counting how many are taken to get average
    for(int i = 0; i < rating.size(); i++){
        if(rating[i] >= 90){
            sum += rating[i];
            toDivide++;
        }
    }
    
    sum /= toDivide;
    float test = roundHalfUp(sum);  //Calling my round half up function.
    
    cout << fixed << setprecision(2) << test << endl;    //Setting to fixed 2 decimal places.
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> rating(n);

    for (int rating_itr = 0; rating_itr < n; rating_itr++) {
        int rating_item;
        cin >> rating_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        rating[rating_itr] = rating_item;
    }

    averageOfTopEmployees(rating);

    return 0;
}
