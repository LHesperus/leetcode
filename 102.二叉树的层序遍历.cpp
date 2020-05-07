/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        unordered_map<TreeNode*,int> map;
        queue<TreeNode*>q;
        q.push(root);
        map.insert(make_pair(root,0));
        while(!q.empty())
        {
            root=q.front();
            if(root->left)
            {
                map.insert(make_pair(root->left,map[root]+1));
                q.push(root->left);
            }
            if(root->right)
            {
                map.insert(make_pair(root->right,map[root]+1));
                q.push(root->right);
            }
            q.pop();
            ans.resize(map[root]+1);
            ans[map[root]].push_back(root->val);
        }
        return ans;
    }
};
// @lc code=end

