/*
You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.

Example 1:

Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.
*/

/**
.....Set constructor lets you create Set objects that store unique values of any type.....

 * @param {string} allowed
 * @param {string[]} words
 * @return {number}
 */
var countConsistentStrings = function(allowed, words) {
    const check = (word) =>{
          for(let c of word)
            if(!allowed.has(c))
                return 0;
            return 1;
    }
           
    let result =0;
    allowed = new Set(allowed);
    
    for(let word of words)
        {
            result += check(word);
        }
    
    return result;

};
