/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    void postorder(TreeNode*root,vector<int>&ans)
    {
        if(root->left)
        {
            postorder(root->left,ans);
        }
        if(root->right)
        {
            postorder(root->right,ans);
        }
        ans.emplace_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        postorder(root,ans);
        return ans;
    }
};
// @lc code=end

