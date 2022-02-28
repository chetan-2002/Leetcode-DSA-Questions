/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
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
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
        {
            return ans;
        }
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> curr_ans;
            for (int i = 0; i < size; i++)
            {
                TreeNode *curr = q.front();
                q.pop();

                curr_ans.push_back(curr->val);
                if (curr->left != NULL)
                {
                    q.push(curr->left);
                }
                if (curr->right != NULL)
                {
                    q.push(curr->right);
                }
            }
            ans.push_back(curr_ans);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end
