/*
 * @lc app=leetcode id=1019 lang=cpp
 *
 * [1019] Next Greater Node In Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    vector<int> nextLargerNodes(ListNode *head)
    {
        vector<int> ele;
        while (head)
        {
            ele.push_back(head->val);
            head = head->next;
        }
        stack<int> st;
        vector<int> ans;
        st.push(ele[ele.size() - 1]);
        ans.push_back(0);
        for (int i = ele.size() - 2; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= ele[i])
            {
                st.pop();
            }
            int ng = st.empty() ? 0 : st.top();
            ans.push_back(ng);
            st.push(ele[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end
