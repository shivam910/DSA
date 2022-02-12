/** Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.

 

Example 1:


Input: n = 3
Output: 5
Example 2:

Input: n = 1
Output: 1
 

Constraints:

1 <= n <= 19
**/

class Solution {
public:
    int numTrees(int n) {
        int catlan[n+1];
        catlan[0] = catlan[1] = 1;
        
        for(int i=2; i<=n; i++)
        {
            catlan[i] = 0;
            for(int j=0; j<i; j++)
                catlan[i] += catlan[j] * catlan[i-j-1];
        }
        return catlan[n];
    }
};
