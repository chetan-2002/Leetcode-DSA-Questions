/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        if (preorder.size() != inorder.size())
        {
            return NULL;
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }
        TreeNode *root = construct(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mp);
        return root;
    }
    TreeNode *construct(vector<int> &preorder, int ps, int pe, vector<int> &inorder, int is, int ie, unordered_map<int, int> mp)
    {
        if (ps > pe || is > ie)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(preorder[ps]);
        int ir = mp[preorder[ps]];
        int nl = ir - is;
        root->left = construct(preorder, ps + 1, ps + nl, inorder, is, ir - 1, mp);
        root->right = construct(preorder, ps + nl + 1, pe, inorder, ir + 1, ie, mp);
        return root;
    }
};
// @lc code=end
