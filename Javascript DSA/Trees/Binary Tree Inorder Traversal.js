/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
//......... Binary Tree Inorder Traversal ..........

var dfs = ( root,inorder ) => {
    if( !root ) return;
    dfs( root.left, inorder );
    inorder.push(root.val);
    dfs( root.right, inorder)
}

var inorderTraversal = function(root) {
    var inorder = [];
    dfs( root,inorder );
    return inorder;
};
