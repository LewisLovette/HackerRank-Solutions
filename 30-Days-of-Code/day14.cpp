	// Add your code here
    Difference(vector<int> ar){
        elements = ar;
    }

    int computeDifference(){
        sort(elements.begin(), elements.end());
        maximumDifference = elements.back() - elements[0];
        
        return maximumDifference;
    }
    