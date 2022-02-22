/*
 * @lc app=leetcode id=538 lang=cpp
 *
 * [538] Convert BST to Greater Tree
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
    int ans = 0;
    TreeNode *bstToGst(TreeNode *root)
    {
        if (root->right)
            bstToGst(root->right);
        ans = ans + root->val;
        root->val = ans;
        if (root->left)
            bstToGst(root->left);
        return root;
    }
    TreeNode *convertBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return root;
        }
        return bstToGst(root);
    }
};
// @lc code=end
