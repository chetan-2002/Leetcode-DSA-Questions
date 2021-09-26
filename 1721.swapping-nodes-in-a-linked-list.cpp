/*
 * @lc app=leetcode id=1721 lang=cpp
 *
 * [1721] Swapping Nodes in a Linked List
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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *ptr1 = head;
        ListNode *ptr2 = head;
        ListNode *kth = NULL;
        while (--k)
        {
            ptr1 = ptr1->next;
        }
        kth = ptr1;
        ptr1 = ptr1->next;
        while (ptr1)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        int temp = ptr2->val;
        ptr2->val = kth->val;
        kth->val = temp;
        return head;
    }
};
// @lc code=end
