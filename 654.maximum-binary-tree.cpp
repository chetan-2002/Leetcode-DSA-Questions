/*
 * @lc app=leetcode id=654 lang=cpp
 *
 * [654] Maximum Binary Tree
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
    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return NULL;
        }
        int maxVal = *max_element(nums.begin(), nums.end());
        TreeNode *root = new TreeNode(maxVal);
        int maxValInd = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == maxVal)
            {
                maxValInd = i;
                break;
            }
        }
        vector<int> prefix(nums.begin(), nums.begin() + maxValInd);
        vector<int> suffix(nums.begin() + maxValInd + 1, nums.end());
        root->left = constructMaximumBinaryTree(prefix);
        root->right = constructMaximumBinaryTree(suffix);

        return root;
    }
};
// @lc code=end
