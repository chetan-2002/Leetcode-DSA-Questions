/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        int count = 0;
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next;
        while (curr != NULL && count < k)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
            count++;
        }

        if (next != NULL)
        {
            ListNode *newhead = reverseKGroup(next, k);
            head->next = newhead;
            /* code */
        }
        return prev;
    }
};
// @lc code=end
