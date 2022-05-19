// https://leetcode.com/problems/move-zeroes/
/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    if(nums.length == 1 && nums[0] == 0) return 0;
    
    for(let i=nums.length-1; i>=0; i--) {
        if(nums[i]===0) {
            nums.splice(i,1);
            nums.push(0);
        }
    }
    return nums;
};
