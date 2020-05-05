/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    void preorder(TreeNode*root,vector<int>&stk)
    {
        if(root!=NULL)
        {
            stk.emplace_back(root->val);
            if(root->left!=NULL)
                preorder(root->left,stk);
            if(root->right!=NULL)
                preorder(root->right,stk);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};
// @lc code=end

