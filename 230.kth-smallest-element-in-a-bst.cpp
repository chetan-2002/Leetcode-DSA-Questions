/*
 * @lc app=leetcode id=230 lang=cpp
 *
 * [230] Kth Smallest Element in a BST
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
    void in(TreeNode *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            in(root->left, ans);
            ans.push_back(root->val);
            in(root->right, ans);
        }
        return;
    }
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> ans;
        in(root, ans);
        return ans[k - 1];
    }
};
// @lc code=end
