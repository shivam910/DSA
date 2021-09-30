class Solution {
    
        int check( char c) 
        {
            switch(c){
                case 'I':
                    return 1;
                case 'V':
                    return 5;
                case 'X':
                    return 10;
                case 'L':
                    return 50;
                case 'C':
                    return 100;
                case 'D':
                    return 500;
                case 'M' :
                    return 1000;
                default:
                    return 0;
        }}
    
public:
    int romanToInt(string s) {
        int result = 0;
        int n = s.length();
        for(auto i=0; i<n; i++)
        {
            if( i!=n && check(s[i]) < check(s[i+1]) )
                result -= check(s[i]);
            else
                result += check(s[i]);
        }
        return result;
    }
};
