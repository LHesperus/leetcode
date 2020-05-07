/*
 * @lc app=leetcode.cn id=106 lang=cpp
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
    TreeNode*  helper( int l, int r, vector<int>& post)
    {
        
        if (l > r) return NULL;
        
        if (post.size()>0)
        {
            int i = map[post.back()];
            TreeNode* rt = new TreeNode(post.back());
            post.pop_back();
            rt->right = helper(i + 1, r, post);
            rt->left=helper(l, i-1, post);
            
            return rt;
        }
        return NULL;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       // TreeNode* rt=new TreeNode(postorder.back());//(postorder.back());  
        for (int i = 0; i < inorder.size(); i++)
            map.insert(make_pair(inorder[i], i));
        return helper(0, postorder.size() - 1, postorder);
    }
private:
    unordered_map<int, int>map;
};
// @lc code=end

