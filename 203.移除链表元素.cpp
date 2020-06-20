/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *sentinel(0);
        sentinel->next=head;

        ListNode *prev = sentinel, *curr = head;
        while(curr!=nullptr)
        {
            if(curr->val!=val)
            {
                prev->next=curr;
                prev=prev->next;
            } 
                

            curr=curr->next;
        }
        return sentinel->next;
       
    }
};
// @lc code=end

