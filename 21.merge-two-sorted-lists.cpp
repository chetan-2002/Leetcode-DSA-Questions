/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *a = l1;
        ListNode *b = l2;
        ListNode *head;
        ListNode *tail;
        if (a == NULL)
        {
            return b;
        }
        if (b == NULL)
        {
            return a;
        }
        if (a == NULL && b == NULL)
        {
            return NULL;
        }
        if (a->val <= b->val)
        {
            head = a;
            tail = a;
            a = a->next;
        }
        else
        {
            head = b;
            tail = b;
            b = b->next;
        }
        while (a != NULL && b != NULL)
        {
            if (a->val <= b->val)
            {
                tail->next = a;
                tail = tail->next;
                a = a->next;
            }
            else
            {
                tail->next = b;
                tail = tail->next;
                b = b->next;
            }
        }
        if (a == NULL)
        {
            tail->next = b;
        }
        if (b == NULL)
        {
            tail->next = a;
        }
        return head;
    }
};
// @lc code=end
