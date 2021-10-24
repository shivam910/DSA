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
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int left_count = 1;
        TreeNode *l=root->left;
        while(l)
        {
            l=l->left;
            left_count+=1;
        }
        int right_count =1;
        TreeNode* r = root->right;
        while(r)
        {
            r=r->right;
            right_count +=1;
        }
        if(left_count == right_count)
            return (pow(2,left_count)-1);
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};

// class Solution {
//        void count(TreeNode* node, vector<int> &inorder)
//        {
//            if(!node) return ;
//            count(node->left, inorder);
//            inorder.push_back(node->val);
//            count(node->right, inorder);
//        }
// public:
//     int countNodes(TreeNode* root) {
//         vector <int> inorder;
//         count(root,inorder);
//         int n= inorder.size();
//         return n;
//     }
// };
