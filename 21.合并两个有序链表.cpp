/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *ans(0);
        ListNode *ans2(ans);
        bool flag1=false,flag2=false;
        while(l1!=nullptr||l2!=nullptr)
        {
            if(l1==nullptr&&l2!=nullptr)
            {
                ans->val=l2->val;
                if(l2->next) ans->next=new ListNode(0);
                else return ans2;
                
                l2=l2->next;
            }else if(l1!=nullptr&&l2==nullptr)
            {
                ans->val=l1->val;
                if(l1->next) ans->next=new ListNode(0);
                else return ans2;
                
                l1=l1->next;
            }else if(l1!=nullptr&&l2!=nullptr)
            {
                if(l1->val>l2->val)
                {
                    ans->val=l2->val;
                    if(l2->next==nullptr&&l1==nullptr)return ans2;
                    else ans->next=new ListNode(0);  
                    if(l2->next) l2=l2->next;
                    else l2=nullptr; 
                }else
                {
                    ans->val=l1->val;
                    
                    if(l1->next==nullptr&&l2==nullptr) return ans2;
                    else  ans->next=new ListNode(0);
                    if(l1->next) l1=l1->next;
                    else l1=nullptr;
                }
            }
           

        }
        return ans2;
    }
};
// @lc code=end

