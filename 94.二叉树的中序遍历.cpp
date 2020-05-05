/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    void inorder(TreeNode*root,vector<int>&in)
    {
        if(root==NULL)
            return;
        if(root->left!=NULL)
        {
            inorder(root->left,in);
        }
        in.emplace_back(root->val);
        if(root->right!=NULL)
        {
            inorder(root->right,in);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        //inorder(root,ans);
        vector<TreeNode*>stk;
        TreeNode* rt =root;
        if(root==NULL)
            return ans;

        while(stk.size()||rt!=NULL)
        {
           while(rt!=NULL)
           {
               stk.push_back(rt);
               rt=rt->left;
           }
           rt=stk.back();
           stk.pop_back();
           
          // rt=stk[stk.size()-1];
           ans.emplace_back(rt->val);
           rt=rt->right;
        }

        return ans;
    }
};
// @lc code=end

