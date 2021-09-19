/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

*/

// Approach 1:
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//             return nums[nums.size()/2];
//     }
// };

// Approach 2.......Boyer-Moore Voting Algorithm.........
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, result=0;
        for( auto temp: nums)
        {
            if( count==0 )
            {
                result = temp;
            }
            count+= (result == temp) ? 1 : -1;
        }
        return result;
    }
};
