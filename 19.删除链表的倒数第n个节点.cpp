/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> node;
        ListNode* tmp(head);
        while(tmp!=NULL)
        {
            node.push_back(tmp);
            //cout<<tmp->val;
            if(tmp->next) tmp=tmp->next;
            else break;
        }
        
        if(n==1&&node.size()==1) return NULL;
        if(n==node.size()) return head->next;
        if(n==1) node[node.size()-2]->next=NULL;
        else node[node.size()-n-1]->next=node[node.size()-n+1];
        return head;
    }
};
// @lc code=end

