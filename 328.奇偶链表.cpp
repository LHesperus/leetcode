/*
 * @lc app=leetcode.cn id=328 lang=cpp
 *
 * [328] 奇偶链表
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *tmp(0);
        if(head==nullptr) return head;//0
        if(head->next==nullptr) return head;//1
        if(head->next->next==nullptr) return head;
        if(head->next->next->next==nullptr)
        {
            ListNode *tmpp(head->next);
           
            head->next=head->next->next;
            tmpp->next=nullptr;
            head->next->next=tmpp;

            return head;
        }
        ListNode *tmp1(head);
        ListNode *tmp2(head->next);
        bool flag=false;
        while(true)
        {
            if(head->next&&head->next->next)
            {
                tmp=head->next;
                head->next=head->next->next;
                head=tmp;
                flag=!flag;
            }else if(head->next&&head->next->next==nullptr)
            {
                //cout<<head->val<<endl;
                if(!flag)//奇数
                {
                    head->next=tmp2;
                   // cout<<"aa"<<endl;
                }
                else
                {
                    head->next->next=tmp2;
                    head->next=nullptr;
                }
                return tmp1;
            }
        }
        return tmp1;

        //
        /*ListNode *A=new ListNode(0);
        ListNode *B=new ListNode(0);
        ListNode *BB=B;
        ListNode *C(head->next);
        ListNode *D(A);
        bool abflag=false;
        while(head)
        {
            if(!abflag)
            {
                A->val=head->val;
                A->next= new ListNode(0);
                A=A->next;
                cout<<A->val;
            }else
            {
                B->val=head->val;
                B->next=new ListNode(0);
                B=B->next;
            }
            if(head->next)
            {
                head=head->next;
            }else
            {
                break;
            }
            
            
            abflag=!abflag;
            
        }
        while(BB&&BB->next)
        {
            A->val=BB->val;
            A->next=new ListNode(0);
            A=A->next;
            if(BB->next)
                BB=BB->next;
            else break;
        }
        
        return D;*/
    }
};
// @lc code=end

