/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
 * 中序遍历后看是否顺序从小至大
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
    void helper(TreeNode* rt,vector<int> &in)
    {
        if(rt==NULL) return;
        
        if(rt->left)
        {
          // in.emplace_back(rt->left->val);
           helper(rt->left,in);
        }
        in.emplace_back(rt->val);
        if(rt->right)
        {
          // in.emplace_back(rt->right->val);
           helper(rt->right,in); 
        }
        
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        vector<int> in;
        helper(root,in);
        //cout<<in[0]<<in[1]<<in[2]<<endl;
        for(int i=1;i<in.size();i++)
            if(in[i]<=in[i-1])
                return false;
        
        return true;
    }
};
// @lc code=end

