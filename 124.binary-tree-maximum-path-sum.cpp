/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
 */

// @lc code=start
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
class Solution
{
public:
    int maxPathSum(TreeNode *root)
    {
        int maxi = INT_MIN;
        dfs_max_path(root, maxi);
        return maxi;
    }
    int dfs_max_path(TreeNode *node, int &maxi)
    {
        if (node == NULL)
        {
            return 0;
        }
        int lh = max(0, dfs_max_path(node->left, maxi));
        int rh = max(0, dfs_max_path(node->right, maxi));
        maxi = max(maxi, lh + rh + node->val);
        return (node->val + max(lh, rh));
    }
};
// @lc code=end
