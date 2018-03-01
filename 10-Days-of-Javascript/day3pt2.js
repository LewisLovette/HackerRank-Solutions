/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    //with a lil help from discussion to get it working smooth...
    try{
        console.log(s.split("").reverse().join("")) 
    }
    catch(e){
        console.log(e.message);
        console.log(s);
    }
}