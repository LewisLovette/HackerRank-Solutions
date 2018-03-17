// The days of the week are: "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
function getDayName(dateString) {
    // Write your code here
    let dayName = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
    let dayNum = new Date(dateString).getDay()  //returns the number for the day - which we use for the array pos.
    
    return dayName[dayNum]; //could return what dayNum equals but this is more clear.
}