/*
 * @lc app=leetcode id=700 lang=cpp
 *
 * [700] Search in a Binary Search Tree
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
    TreeNode *ans = NULL;
    TreeNode *searchBST(TreeNode *root, int val)
    {
        while (root != NULL)
        {
            if (root->val == val)
            {
                return root;
            }
            if (root->val < val)
            {
                root = root->right;
            }
            else
            {
                root = root->left;
            }
        }

        return NULL;
    }
};
// @lc code=end
