/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL) return NULL;
        unordered_set<ListNode*> set1;
        while(head)
        {
            if(set1.count(head))
            {
                return head;
            }else
            {
                set1.insert(head);
            }
            if(head->next==NULL) return NULL;
            head=head->next;
        }
        return NULL;

        //floyd
        /*ListNode* n1(head);
        ListNode* n2(head);

        if(head==NULL||head->next==NULL||head->next->next==NULL) return NULL;
        n1=n1->head;
        n2=n2->head->head;
        //have loop?
        int cnt=0;
        while()
        {
            if(n1==n2)
            cnt++;
        }
        // where is the first node
        */
    }
};
// @lc code=end

