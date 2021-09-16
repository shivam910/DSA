/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let temp=0,reverse=0;
    while(x!=0)
        {
            temp = x%10;
            x= parseInt(x/10);
            reverse = reverse*10 + temp;
        }
    if(reverse < Math.pow(-2,31) || reverse > Math.pow(2,31)) return 0;
    return reverse;
};
