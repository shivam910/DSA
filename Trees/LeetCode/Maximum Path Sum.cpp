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
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        check(root, maxi);
        return maxi;
    }
    int check( TreeNode* node, int &maxi) {
        if(!node) return 0;
        
        int lh = (0, check(node -> left, maxi));
        int rh = (0, check(node -> right, maxi));
        
        maxi = max( maxi, lh+rh+ node -> val);
        return max(lh,rh) +node->val;
    }
};
