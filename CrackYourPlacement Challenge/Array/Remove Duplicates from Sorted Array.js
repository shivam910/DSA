// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/
/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let i=0;
    for(let j=0; j<nums.length; j++) {
        if(nums[i]!=nums[j])
            nums[++i]=nums[j];
    }
    return ++i;
};

// C++ Solution
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, n=nums.size()-1;
        for( int j=1; j<=n; j++ ) {
            if(nums[i]!=nums[j]) {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
*/
