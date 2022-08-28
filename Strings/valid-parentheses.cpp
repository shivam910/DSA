class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0) return true;
        stack<char> str;
        for(auto i : s) {
            if(i=='(' || i=='{' || i=='['){
                str.push(i);
            }
            else{
                if(str.empty() || (str.top()=='(' && i !=')') || (str.top()=='{' && i !='}') || (str.top()=='[' && i !=']')) return false;
                str.pop();  
            }
        }
        return str.empty();
    }
};
