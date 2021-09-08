// Approach 1
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()<t.length())
            return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0; i<s.length(); i++)
            if(s[i]!=t[i]) return false;
        return true;
    }
};


// Better Approach
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[256]={0};
        int i;
        
        for(i=0; s[i] && t[i]; i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }
        
        if(s[i] || t[i]) // for both string with diff length
            return false;
        
        for(i=0; i<256; i++)
        {
            if(count[i]) return false;
        }
        return true;
    }
};
