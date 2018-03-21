function regexVar() {
    /*
     * Declare a RegExp object variable named 're'
     * It must match a string that starts with 'Mr.', 'Mrs.', 'Ms.', 'Dr.', or 'Er.', 
     * followed by one or more letters.
     */
    
    let re = /^(Mr|Mrs|Ms|Dr|Er)\.[a-zA-Z]+$/    // beggining matches (..|..|..).  then .  + [set a-z and A-Z] matches end of line.
    
    /*
     * Do not remove the return statement
     */
    return re;
}
//This was fun to mess around with~