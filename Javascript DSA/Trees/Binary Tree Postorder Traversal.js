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

var dfs = ( node, postOrder ) => {
    if(!node)
        return [];
    dfs( node.left, postOrder );
    dfs( node.right, postOrder );
    postOrder.push(node.val);
    return postOrder;
}

var postorderTraversal = function( root ) {
    
    let postOrder= [];
    postOrder = dfs( root,postOrder );
    return postOrder;
};
