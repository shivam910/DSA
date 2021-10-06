/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = (nums) => {
    var ans = [];
    for( let n of nums)
        {
            n = Math.abs(n);
            if( nums[n-1] > 0 )
                {
                   nums[n-1] *= -1;
                }
            else 
                ans.push(n);
        }
    return ans;
};
