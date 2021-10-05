class Solution {
public:
    int climbStairs(int n) {
        if( n <= 2 )
        return n;
        int a = 1, ans = 2;
        for( int i=2; i<n; i++)
        { 
            int temp = ans;
            ans += a;
            a = temp;
        }
        return ans;
    } 
};
