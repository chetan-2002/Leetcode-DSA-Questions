/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *curr = head;
        for (curr = head; curr != NULL && curr->next != NULL; curr = curr->next->next)
        {
            int temp = curr->val;
            curr->val = curr->next->val;
            curr->next->val = temp;
        }
        return head;
    }
};
// @lc code=end
