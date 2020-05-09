/*
 * @lc app=leetcode.cn id=173 lang=cpp
 *
 * [173] 二叉搜索树迭代器
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
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        inorder(in,root);
        p=0;
    }
    
    void inorder(vector<int>&in,TreeNode* rt)
    {
        if(rt==NULL)  return ;
        if(rt->left) inorder(in,rt->left);
        in.emplace_back(rt->val);
        if(rt->right) inorder(in,rt->right);
    }
    /** @return the next smallest number */
    int next() {
        return in[p++];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(p<in.size()) return true;
        else return false;
    }
private:
    vector<int> in;
    int p;
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

