function regexVar() {
    /*
     * Declare a RegExp object variable named 're'
     * It must match ALL occurrences of numbers in a string.
     */
    let re = /\d+/g;
    //pretty simple, gets each number if it's not interrupted by anything using the 'g' flag.
    /*
     * Do not remove the return statement
     */
    return re;
}