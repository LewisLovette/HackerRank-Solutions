/*
 * Modify and return the array so that all even elements are doubled and all odd elements are tripled.
 * 
 * Parameter(s):
 * nums: An array of numbers.
 */
function modifyArray(nums) {
    var temp = x => {
        x = (x % 2 == 0) ? x*2: x*3;    //ayy - creates if statement - as so    (statement) ? if true do: else do;    
        return x;
    }
    
    var newArr = nums.map(temp)
    
    return newArr;
}