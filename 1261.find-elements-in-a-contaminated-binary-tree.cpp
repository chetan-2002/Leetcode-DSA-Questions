/*
 * @lc app=leetcode id=1261 lang=cpp
 *
 * [1261] Find Elements in a Contaminated Binary Tree
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
class FindElements
{
public:
    set<int> s;
    queue<pair<TreeNode *, int>> q;
    FindElements(TreeNode *root)
    {
        q.push({root, 0});
        while (!q.empty())
        {
            auto front = q.front();
            q.pop();
            TreeNode *node = front.first;
            int index = front.second;
            s.insert(index);
            if (node->left != NULL)
            {
                q.push({node->left, 2 * index + 1});
            }
            if (node->right != NULL)
            {
                q.push({node->right, 2 * index + 2});
            }
        }
    }

    bool find(int target)
    {
        return (s.find(target) != s.end());
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
// @lc code=end
