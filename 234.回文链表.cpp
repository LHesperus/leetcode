/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    bool isPalindrome(ListNode* head) {
        vector<int> node;
        while(head)
        {
            node.push_back(head->val);
            if(head->next)
                head=head->next;
            else break;
        }
        if(node.size()<2) return true;
        int i=0,j=node.size()-1;
        while(i<j)
        {
            if(node[i]!=node[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end

