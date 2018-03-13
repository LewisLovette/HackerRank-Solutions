/*
*	Return the largest value of any a & b < k in S (where a < b).
* 	
*	n: Set S is a sequence of distinct integers from 1 to n (i.e., {1, 2, ..., n}).
*	k: An integer.
*/
function getMaxLessThanK(n, k) {
    let largest = 0, temp;
    
    for(var i = 1; i < n; i++){
        for(var j = i + 1; j <= n; j++){
            temp = i & j;   //setting bitwise
            if (temp > largest && temp < k) { //testing against - largest num that is less than k
                largest = temp;
            }
        }
    }
    
    return largest;
}