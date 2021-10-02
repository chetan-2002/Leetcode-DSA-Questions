/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
    int helper(TreeNode *root, int &maxi)
    {
        if (root == NULL)
        {
            return 0;
        }
        int lh = helper(root->left, maxi);
        int rh = helper(root->right, maxi);
        maxi = max(maxi, 1 + lh + rh);

        return (1 + max(lh, rh));
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int maxi = INT_MIN;
        helper(root, maxi);
        return maxi-1;
    }
};
// @lc code=end
