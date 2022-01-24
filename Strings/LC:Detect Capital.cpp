class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        int upper=0;
        for(int i=0; i<n; i++)
            if(word[i]>='A' && word[i]<='Z')
                upper++;
        if(upper==n ||upper == 0 || (word[0]>='A' && word[0]<='Z' && upper==1) )
            return true;
        return false;
    }
};
