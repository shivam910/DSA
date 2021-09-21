/*.....Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10.....*/

class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans(n+1);
        for(int i=1; i<=n; i++)
        {        if(i&1)
                 {
                      ans[i]= ans[i>>1]+1;
                 }
                 else 
                  ans[i]=ans[i>>1];
        }
        return ans;
    }
};
