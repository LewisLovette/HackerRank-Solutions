function regexVar() {
    //Declare a RegExp object variable named 're'
    //It must match a string that starts and ends with the same vowel (i.e., {a, e, i, o, u})
    
    //Used check from 'topics' section but changed '.' (any letter) to any vowel that matches +
    let re = /^(a|e|i|o|u).*\1$/    //the '$' checks that the last character matches the first character captured - 
                                    //and the '^' means 'matches beggining of input'
    // Do not remove the return statement
    return re;
}