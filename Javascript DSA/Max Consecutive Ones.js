/**
 * @param {number[]} nums
 * @return {number}
 */

var solve = ( nums, count, maxi =0) => {
    for( let num of nums)
        {
            if( num == 1 )
                {
                    count++;  
                } 
            else
                {
                    maxi = Math.max( maxi, count);
                    count=0;
                }
            maxi = Math.max( maxi, count);
        }
    return maxi;
}

var findMaxConsecutiveOnes = function(nums) {
    let maxi=0, count = 0;
    maxi= solve( nums, count, maxi );
    return maxi;
};
