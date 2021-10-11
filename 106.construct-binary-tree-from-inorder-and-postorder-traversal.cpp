/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        if (inorder.size() != postorder.size())
        {
            return NULL;
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }

        TreeNode *root = construct(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, mp);
        return root;
    }
    TreeNode *construct(vector<int> &inorder, int is, int ie, vector<int> &postorder, int ps, int pe, unordered_map<int, int> &mp)
    {
        if (is > ie || ps > pe)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(postorder[pe]);
        int ir = mp[postorder[pe]];
        int nl = ir - is;
        root->left = construct(inorder, is, ir - 1, postorder, ps, ps + nl - 1, mp);
        root->right = construct(inorder, ir + 1, ie, postorder, ps + nl, pe - 1, mp);
        return root;
    }
};
// @lc code=end
