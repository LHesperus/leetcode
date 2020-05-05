/*
 * @lc app=leetcode.cn id=652 lang=cpp
 *
 * [652] 寻找重复的子树
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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_set<TreeNode*root > Set;
        vector<TreeNode*> stk;
        stk.push_back(root);
        while(1)
        {
            if(root->left!=NULL)
            {
                stk.push_back(root->left);
                root=root->left;
                continue;
            }else if(root->right!=NULL)
            {
                stk.push_back(root->right);
                root=root->right;
            }else
            
        }
    }
};
// @lc code=end

