/**
https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/

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
var dfs = ( root, preorder ) =>{
        if( !root ) return;
        preorder.push( root.val );
        dfs( root.left, preorder );
        dfs( root.right, preorder);
    }

var preorderTraversal = function( root ) {
    let preorder = []
    dfs( root, preorder)
    return preorder;
};
