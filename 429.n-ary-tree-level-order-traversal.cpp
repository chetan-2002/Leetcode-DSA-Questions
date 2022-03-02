/*
 * @lc app=leetcode id=429 lang=cpp
 *
 * [429] N-ary Tree Level Order Traversal
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
*>     vector<Nodechildren;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        queue<Node *> q;
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            vector<int> curr_level;
            for (int i = 0; i < n; i++)
            {
                Node *front = q.front();
                q.pop();
                curr_level.push_back(front->val);
                for (auto n : front->children)
                {
                    if (n != NULL)
                        q.push(n);
                }
            }
            ans.push_back(curr_level);
        }
        return ans;
    }
};
// @lc code=end
