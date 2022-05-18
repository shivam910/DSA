//  https://leetcode.com/problems/find-the-duplicate-number/submissions/
/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
        
    let low = 1;
    let high = nums.length -1;
    while(low < high) {
        const mid = Math.floor(low + (high-low)/2);
        let cnt = 0;
        
        for(let i=0; i < nums.length; i++){
            if(nums[i] <= mid) cnt++;
        }
        
        if(cnt > mid) 
            {high = mid;}
        else
            {low = mid+1;}
        cnt=0;
    }
    return low;
};


// C++ solution

/* class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size() - 1, cnt;
        
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            cnt = 0;
            // cnt number less than equal to mid
            for(int n : nums)
            {
                if(n <= mid)
                    ++cnt;
            }
            // binary search on left
            if(cnt <= mid)
                low = mid + 1;
            else
            // binary search on right
                high = mid - 1;
            
        }
        return low;
    }
	// for github repository link go to my profile.
};
*/
