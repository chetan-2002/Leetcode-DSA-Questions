/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode *head)
    {
        stack<int> data;
        ListNode *temp = head;
        while (temp != NULL)
        {
            data.push(temp->val);
            temp = temp->next;
        }
        while (head != NULL)
        {
            if (data.top() != head->val)
            {
                return false;
            }
            head = head->next;
            data.pop();
        }

        return true;
    }
};
// @lc code=end
