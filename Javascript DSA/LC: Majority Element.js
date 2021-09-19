/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
Example 1:
Input: nums = [3,2,3]
Output: 3
*/

/**
 * @param {number[]} nums
 * @return {number}
 */

// .......Boyer-Moore Voting Algorithm.........

var majorityElement = function(nums) {
    let count =0, result =0;
     for(let i=0; i<nums.length; i++)
         {
             if(count===0)
                {
                    result = nums[i];
                }
             count+= (result===nums[i]) ? 1 : -1;
         }
    return result;
};
