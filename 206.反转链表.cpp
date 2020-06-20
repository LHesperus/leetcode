/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        ListNode* tmp(head);
        ListNode* tmp2(head);
        if(head==NULL||head->next==NULL) return head;
        while(head->next)
        {
            tmp=head->next;
            if(head->next->next==NULL) head->next=NULL;
            else head->next=head->next->next;
            tmp->next=tmp2;
            tmp2=tmp;
        }
        return tmp;
    }
};
// @lc code=end

