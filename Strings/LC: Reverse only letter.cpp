class Solution {
public:
    string reverseOnlyLetters(string s) {
        string a;
        int i=0,j=s.size()-1;
        for(i=0;i< s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                while(j >= 0 && !isalpha(s[j]))
                    --j;
                a+=s[j--];
            }
            else a+=s[i];
        }
        return a;
    }
};
