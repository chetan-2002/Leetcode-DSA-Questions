/*
 * @lc app=leetcode id=1305 lang=cpp
 *
 * [1305] All Elements in Two Binary Search Trees
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
    void dfs(TreeNode *root, vector<int> &ds)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            dfs(root->left, ds);
            ds.push_back(root->val);
            dfs(root->right, ds);
        }
    }
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        vector<int> ds;
        dfs(root1, ds);
        dfs(root2, ds);
        sort(ds.begin(), ds.end());
        return ds;
    }
};
// @lc code=end
