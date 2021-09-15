/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
        let ans = 0;
    for(let a of nums)
        {
            ans^= a;
        }
    return ans;
};
