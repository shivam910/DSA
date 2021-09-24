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

// Input: root = [1,null,2,3]
// Output: [3,2,1]

class Solution {
    private:
    void dfs( TreeNode *node, vector <int> &postOrder )
    {
        if( !node)
            return;
        dfs( node -> left, postOrder );
        dfs( node -> right, postOrder );
        postOrder.push_back( node -> val );
    }
    
public:
    vector<int> postorderTraversal( TreeNode* root ) {
        vector <int> postOrder;
        dfs( root, postOrder );
        return postOrder;
    }
};
