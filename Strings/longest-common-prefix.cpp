class Solution {
public:
    string check(string s1, string s2){
        string res ="";
        int n= s1.size(),m=s2.size();
        for(int i=0; i<(m>n?n:m); i++){
            if(s1[i]==s2[i]){
                res+=s1[i];
            }
            else{
                break;
            }
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        res = check(strs[0],strs[1]);
        for(int i=2;i<strs.size();i++){
            res= check(res,strs[i]);
        }
        return res;
    }
};
