/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 * 假设A长度为 x+z,B长度为 y+z
 * 则A指针遍历到A末尾后在遍历B，则B指针遍历到B末尾后在遍历A，
 * 共遍历x+y+z可找到交点。
 * 若无交点则遍历完后会同时达到AB的末尾
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*A(headA);
        ListNode*B(headB);
        while(A!=NULL&&B!=NULL)
        {
            if(A==B) return A;
            if(A->next==NULL&&B->next==NULL) return NULL;
            if(A->next==NULL) A=headB;
            else A=A->next;
            if(B->next==NULL) B=headA;
            else B=B->next;
        }
        return NULL;
    }
};
// @lc code=end

