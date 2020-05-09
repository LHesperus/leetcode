/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
 * 将一个点的祖先存到set中，
 * 在set中找另一个点的祖先
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
    void helper(TreeNode* root)
    {
        if(root->left) 
        {
            map.insert(make_pair(root->left,root));
            helper(root->left);
        }
        if(root->right)
        {
            map.insert(make_pair(root->right,root));
            helper(root->right);
        } 
    }
    void helper2(TreeNode* p)
    {
        set.insert(p);
        if(map.count(p))
        { 
            helper2(map[p]);
        }
    }
    TreeNode* helper3(TreeNode* q)
    {
        if(set.count(q))
        {
            return q;
        }else
        {
            return helper3(map[q]);
        }
        
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        helper(root); 
        helper2(p);
        return helper3(q);
    }
private:
    unordered_map<TreeNode*,TreeNode*> map;//存父节点
    unordered_set<TreeNode*> set;//存p的父节点
};
// @lc code=end

