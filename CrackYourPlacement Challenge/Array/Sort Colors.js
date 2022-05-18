// https://leetcode.com/problems/sort-colors/

/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let i=0, low=0, high= nums.length-1;
    
    while(low < high && i <= high) {
        if(nums[i] === 2) {
            [nums[i], nums[high]] = [nums[high],nums[i]];
            high--;
        }
        else if(nums[i] ===0) {
            [nums[i],nums[low]] = [nums[low],nums[i]];
            low++;
            i++;
        }
        else i++;
    }
};

//C++ solutiom
/*
class Solution {
private: void swap(vector <int>& nums, int p1, int p2) {
        int temp = nums[p1];
        nums[p1] = nums[p2];
        nums[p2] = temp;
    }
public:
    void sortColors(vector<int>& nums) {
        int i=0, l=0, r=nums.size()-1;
        while( i <= r ) {
            if( nums[i] ==0 ) {
                swap( nums, l++, i++ );
            }
            else if( nums[i] == 2 ) {
                swap( nums, i, r-- );
            }
            else i++;
        }
    }
};
*/
