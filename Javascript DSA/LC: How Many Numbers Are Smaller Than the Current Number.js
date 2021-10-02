/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = (nums) => {
    const sort_nums =[...nums].sort( (a,b) => a-b );
    return nums.map( element => (
    sort_nums.indexOf( element)
    ));
};
