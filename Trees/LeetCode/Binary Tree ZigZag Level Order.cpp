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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector <int>> result;
        if( !root )
            return result;
        
        queue <TreeNode*> nodeQueue;
        nodeQueue.push(root);
        bool flag = true;
//         Flag true means left to right & false means right to left
        while(!nodeQueue.empty())
        {
            int size = nodeQueue.size();
            vector <int> row(size);
            for( int i=0; i< size; i++ )
            {
                TreeNode* node = nodeQueue.front();
                nodeQueue.pop();
//                 Position to fill the node's value
                int index = flag ? i : size-1-i;    
            
                row[index] = node->val ;
                if(node -> left)
                    nodeQueue.push( node -> left );
                if(node -> right)
                    nodeQueue.push( node -> right );
            }
            result.push_back(row);
            flag = !flag ;
        }
        return result;
    }
};
