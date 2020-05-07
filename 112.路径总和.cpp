/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
      //  if(root->val==sum) return true;
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            for(int i=q.size();i>0;i--)
            {
                root=q.front();
                if(root->left==NULL&&root->right==NULL&&root->val==sum) return true;
                if(root->left)
                {
                    q.push(root->left);
                    root->left->val+=root->val;
                  //  if(root->left->val==sum) return true;
                }
                if(root->right)
                {
                    q.push(root->right);
                    root->right->val+=root->val;
                  //  if(root->right->val==sum) return true;
                }
                q.pop();
            }
        }
        return false;
    }
};
// @lc code=end

