// Link: https://leetcode.com/problems/smallest-string-with-a-given-numeric-value/

class Solution {
public:
    string getSmallestString(int n, int k) {
        k-=n;
        string s="";
        for(int i=0; i<n; i++)
            s.push_back('a');
        while(k>0) {
            s[--n] ='a'+min(25,k);
            k-= min(25,k);
        }
        return s;
    }
};
