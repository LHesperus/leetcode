/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 * hashset或快慢指针
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
    bool hasCycle(ListNode *head) {
        /*unordered_set<ListNode*> set1;
        while(head!=NULL)
        {    
            if(set1.count(head))
            {
                return true;
            }else
            {
                set1.insert(head);
            }
            if(head->next==NULL) return false;
            head=head->next;
        }
        return false;*/

        //快慢指针
        ListNode* slow(head);
        ListNode* fast(head);

        while(head)
        {
            if(slow->next==NULL||fast->next==NULL||fast->next->next==NULL) return false;
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};
// @lc code=end

