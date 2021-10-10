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
 * @return {number}
 */
var maxPathSum = (root) => {
    var max =Number.MIN_SAFE_INTEGER;
    var check = (node) => {
        if (!node) return 0;
        var lh = Math.max( check(node.left), 0 );
        let rh = Math.max( check(node.right), 0);
        max = Math.max(lh+rh+node.val, max);
        return Math.max(lh,rh) +node.val;
    };
    check(root);
    return max;
};
