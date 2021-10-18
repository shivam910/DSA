/**
 * @param {number} n
 * @return {number}
 */
var binaryGap = function(n) {
    var maxGap = 0, gap = 0, str = n.toString(2);
    var start = 0;
    for( start; start<str.length; start++)
    {
           if( str.charAt(start) !='0' )
               break;
    }
    
    for( var i = start+1 ; i< str.length; i++) 
    {
            if( str.charAt(i)=='0' )
                gap= gap+1;
        else
            {
                if( gap+1 > maxGap )
                    maxGap = gap+1;
                    gap = 0;
            }
    }
            return maxGap;
};
