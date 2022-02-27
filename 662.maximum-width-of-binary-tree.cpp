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
        int ans = 1;
        vector<int>vec;
        while (!q.empty())
        {
            ans = INT_MIN;
            int size = q.size();
            int first = q.front().second, last = q.back().second;
            // cout<<first << " "<<last << " ";
            ans  =max(ans, last - first + 1);
            // vec.push_back(ans);
            // cout<<ans<<endl;
            for (int i = 0; i < size; i++)
            {
                auto front = q.front();
                q.pop();
                TreeNode *curr = front.first;
                int curr_idx = front.second;

                if (curr->left != NULL)
                {
                    q.push({curr->left, (long long)curr_idx * 2 + 1});
                }
                if (curr->right != NULL)
                {
                    q.push({curr->right, (long long)curr_idx *2 + 2});
                }
            }
        }
        // return *max_element(vec.begin(), vec.end());
        return ans;
    }
};
// @lc code=end
