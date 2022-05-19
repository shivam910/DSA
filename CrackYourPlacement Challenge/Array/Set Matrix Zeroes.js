//https://leetcode.com/problems/set-matrix-zeroes/

/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    let row = matrix.length, col = matrix[0].length, col0 = 1;
    for(let i=0; i<row; i++){
        if(matrix[i][0] === 0) col0 = 0;
        
        for(let j=1; j<col; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }
        for(let i= row-1; i>=0; i--) {
            for(let j= col-1; j>=1; j--) {
                if(matrix[0][j] === 0 || matrix[i][0] === 0) {
                    matrix[i][j] = 0;
                }
            }
            if(col0 == 0) 
                matrix[i][0] = 0;
        }
    
};

//C++ Solution
/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1, row = matrix.size(), col = matrix[0].size();
        for(int i=0; i<row; i++) {
            if(matrix[i][0] == 0) col0 = 0;
            for(int j=1; j<col; j++) {
                if( matrix[i][j]==0) 
                    matrix[0][j] = matrix[i][0] =0;
            }
        }
        for(int i= row-1; i>=0; i--) {
            for(int j=col-1; j>=1; j--) 
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                    matrix[i][j] = 0;
                if(col0 == 0) matrix[i][0] = 0;
            
        }
    }
};
*/
