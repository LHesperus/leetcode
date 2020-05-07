/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool DFS(TreeNode*rt1,TreeNode*rt2)
    {
        if(rt1!=NULL&&rt2!=NULL&&rt1->val==rt2->val)
        {
            return DFS(rt1->left,rt2->right)&&DFS(rt1->right,rt2->left);
        }else if(rt1!=rt2)
        {
            return false;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return DFS(root->left,root->right);
    }
};
// @lc code=end

