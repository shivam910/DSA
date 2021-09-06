/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    let Triangle= new Array(numRows);
    
    for(let i=0; i< numRows; i++)
        {
            let currentRow = new Array(i+1);
            currentRow[0]=1;
            currentRow[currentRow.length-1] = 1;
            
            for(let j=1; j<currentRow.length-1; j++ )
                {
                    let aboveRow = Triangle[i-1];
                    currentRow[j] = aboveRow[j-1] + aboveRow[j] ;
                }
            Triangle[i] = currentRow;
        }
    return Triangle;
};
