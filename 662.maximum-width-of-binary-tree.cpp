/*
 * @lc app=leetcode id=662 lang=cpp
 *
 * [662] Maximum Width of Binary Tree
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
    int widthOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});
        int ans;
        while (!q.empty())
        {
            ans =INT_MIN;
            int size = q.size();
            int first, last;
            for (int i = 0; i < size; i++)
            {
                auto front = q.front();
                q.pop();
                TreeNode *curr = front.first;
                int curr_idx = front.second;
                if (i == 0)
                {
                    first = curr_idx;
                }
                if (i == size - 1)
                {
                    last = curr_idx;
                }
                if (curr->left != NULL)
                {
                    q.push({curr->left, (curr_idx * 2 )+ 1});
                }
                if (curr->right != NULL)
                {
                    q.push({curr->right, (curr_idx * 2) + 2});
                }
                ans = max(ans, last - first + 1);
            }
            
        }
        return ans;
    }
};
// @lc code=end
