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
var inorderTraversal = (root) => {
    let stack = [];
    let result = [];
    while( stack.length !== 0 || root !== null )
        {
            while( root !== null )
                {
                    stack.push(root);
                    root = root.left;
                }
            root = stack.pop();
            result.push( root.val );
            root = root.right;
        }
    return result;
};
