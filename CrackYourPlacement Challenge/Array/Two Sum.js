// https://leetcode.com/problems/two-sum/submissions/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
// HashMap implementation
var twoSum = function(nums, target) {
    let  map = new Map();
    
    for(let i=0; i<nums.length; i++) {
        let current_val = nums[i];
        let possible_ans = target-current_val;
        if(map.has(possible_ans)) {
            return [map.get(possible_ans), i];
        }
        map.set(current_val,i);
    }
};

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let i=0,j=0;
    for(i=0; i<nums.length; i++) {
        for(j=i+1; j<nums.length; j++) {
            if(nums[i] + nums[j] == target) 
                return  [i,j];
        }
    }
    return  [i,j];
};
