/**
 * @param {number} n - a positive integer
 * @return {number}
 */

// ............ Nuimber of 1 Bits .............

var onebits = ( count, nums )  => {
    while(nums)
        {
            count++;
            nums &=nums-1;
        }
    return count;
}
var hammingWeight = function(nums) {
    let count =0;
    count = onebits( count, nums );
    return count;
};
