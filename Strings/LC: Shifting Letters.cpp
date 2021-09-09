// Shifting Letter 

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for(int i=0; i<shifts.size(); i++)
        {
               shifts[i]%=26;         
        }
        for(int i=shifts.size()-2; i>=0; i--)
        {
            shifts[i]+= shifts[i+1];
        }
        for(int i=0; i<shifts.size(); i++)
        {
            int c= s[i] - 'a';
            c=(c + shifts[i]) % 26;
            s[i]= 'a'+c;
        }
        return s;
    }
};
