class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        long long int res=0,product=1,n=a.size();
        for(long long int start=0,end=0; end<n; end++) {
            product *= a[end];
        
        while(start < end && product >= k)
            product /= a[start++];
        
        if( product < k ) {
            long long int len = end - start + 1;
            res+=len;
        }
    }
        return res;
    }
};
