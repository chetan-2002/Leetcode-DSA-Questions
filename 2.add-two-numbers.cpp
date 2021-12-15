/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head = new ListNode(0);
        ListNode *result = head;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry > 0)
        {
            int resultValue = carry + (l1 != NULL ? l1->val : 0) + (l2 != NULL ? l2->val : 0);
            result->next = new ListNode(resultValue % 10);
            carry = resultValue / 10;
            l1 = (l1 == NULL ? l1 : l1->next);
            l2 = (l2 == NULL ? l2 : l2->next);
            result = result->next;
        }
        return head->next;
    }
};
// @lc code=end
