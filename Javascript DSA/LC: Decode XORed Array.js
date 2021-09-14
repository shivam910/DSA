// Decode XORed Array
/**
 * @param {number[]} encoded
 * @param {number} first
 * @return {number[]}
 */
var decode = function(encoded, first) {
    let res =[first];
    for(let i=0; i<encoded.length; i++)
        {
            res[i+1] = res[i]^encoded[i];
        }
    return res;
};
