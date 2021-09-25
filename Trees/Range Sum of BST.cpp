//Link: https://leetcode.com/problems/range-sum-of-bst/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Using Inorder Traversal
// Using Recursion
// Time Complexity: O(N), where N is the number of nodes in the tree.
// Space Complexity: O(H), where H is the height of the tree. 

class Solution {
public:
    int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if( !root ) return 0;
        if( root -> left != NULL)
            rangeSumBST( root-> left, low, high);
        if( root-> val >= low && root -> val <= high)
        {
            sum+= root-> val;
        }
        if( root -> right != NULL)
        {
            rangeSumBST( root-> right, low, high);
        }
        return sum;
    }
};
