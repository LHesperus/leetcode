/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
    TreeNode* helper(int l,int r,vector<int>&pre,int &p)
    {
        if(l>r) return NULL;
        if(p<pre.size())
        {
            int i=map[pre[p]];
            TreeNode* rt=new TreeNode(pre[p]);
            p++;
            rt->left=helper(l,i-1,pre,p);
            //p++;
            rt->right=helper(i+1,r,pre,p);
            return rt;
        }
        return NULL;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int p=0;
        for(int i=0;i<inorder.size();i++)
            map.insert(make_pair(inorder[i],i));
        return  helper(0,preorder.size()-1,preorder,p);
    }
unordered_map<int,int> map;
int p;
};
// @lc code=end

