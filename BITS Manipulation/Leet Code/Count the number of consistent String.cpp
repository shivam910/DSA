/*
You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.

Example 1:

Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.
*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count= words.size();
        bool a[26]= {false};
        for(char c: allowed)
        {
            a[c- 'a']= true;
        }
        
        for(string s: words)
        {
            for(char c: s)
            {
                if(a[c-'a']==false)
                {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};
