/*
 * @lc app=leetcode id=1022 lang=cpp
 *
 * [1022] Sum of Root To Leaf Binary Numbers
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
    int solve(TreeNode *root, int curr)
    {
        curr = curr << 1;
        curr += root->val;
        if (root->left == NULL && root->right == NULL)
        {
            ans += curr;
        }
        if (root->left != NULL)
        {
            solve(root->left, curr);
        }
        if (root->right != NULL)
        {
            solve(root->right, curr);
        }
        return ans;
    }
    int sumRootToLeaf(TreeNode *root)
    {
        int solution = solve(root, 0);
        return solution;
    }
};
// @lc code=end
