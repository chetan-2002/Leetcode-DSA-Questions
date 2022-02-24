/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
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
    ListNode *sortList(ListNode *head)
    {
        vector<int> ans;
        ListNode *curr = head;
        while (curr != NULL)
        {
            ans.push_back(curr->val);
            curr = curr->next;
        }
        sort(ans.begin(), ans.end());
        ListNode *temp = head;
        for (auto &c : ans)
        {
            temp->val = c;
            temp = temp->next;
        }
        return head;
    }
};
// @lc code=end
