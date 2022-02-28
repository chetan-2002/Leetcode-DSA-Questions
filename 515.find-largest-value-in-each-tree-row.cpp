/*
 * @lc app=leetcode id=515 lang=cpp
 *
 * [515] Find Largest Value in Each Tree Row
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
    vector<int> largestValues(TreeNode *root)
    {
        vector<int> ans;
        queue<TreeNode *> q;
        if (root == NULL)
        {
            return ans;
        }
        q.push(root);
        while (!q.empty())
        {
            int sz = q.size();
            int temp = INT_MIN;
            for (int i = 0; i < sz; i++)
            {
                TreeNode *front = q.front();
                q.pop();
                if (front->val > temp)
                    temp = front->val;
                if (front->left != NULL)
                {
                    q.push(front->left);
                }
                if (front->right != NULL)
                {
                    q.push(front->right);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end
