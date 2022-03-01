/*
 * @lc app=leetcode id=1315 lang=cpp
 *
 * [1315] Sum of Nodes with Even-Valued Grandparent
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
    int sumEvenGrandparent(TreeNode *root)
    {
        int ans = 0;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *front = q.front();
            q.pop();
            if (front->left != NULL)
            {
                q.push(front->left);
                if (front->val % 2 == 0)
                {
                    if (front->left->left != NULL)
                    {
                        ans += front->left->left->val;
                    }
                    if (front->left->right != NULL)
                    {
                        ans += front->left->right->val;
                    }
                }
            }
            if (front->right != NULL)
            {
                q.push(front->right);
                if (front->val % 2 == 0)
                {
                    if (front->right->left != NULL)
                    {
                        ans += front->right->left->val;
                    }
                    if (front->right->right != NULL)
                    {
                        ans += front->right->right->val;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end
