/*
 * @lc app=leetcode.cn id=889 lang=cpp
 *
 * [889] 根据前序和后序遍历构造二叉树
 * 前序：根左右，
 * 后序：左右根
 * 每次迭代，确定下次前序后序的位置
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
 *
 */
class Solution {
public:
    TreeNode* helper(vector<int>&pre,int lpre,int rpre,int lpost,int rpost)
    {
       // cout<<lpre<< " "<<rpre<< " "<<lpost<<" "<<rpost<<endl;
     //   if(lpre>rpre) return NULL;
        TreeNode*rt=new TreeNode(pre[lpre]);
      //  cout<<rt->val<<endl;
        if(lpre<rpre) 
        {
            int i=map[pre[lpre+1]]+1;
            int leftlen=i-lpost;
            int rightlen=rpost-leftlen-lpost;
        
         //   cout<<leftlen<< " "<<rightlen<<endl;
            if(leftlen<=0) rt->left=NULL;
            else rt->left=helper(pre,lpre+1,lpre+leftlen,lpost,lpost+leftlen-1);
            if(rightlen<=0) rt->right=NULL;
            else rt->right=helper(pre,lpre+leftlen+1,rpre,i,rpost-1);
            
            
            
        }
      
        return rt;
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        for(int i=0;i<post.size();i++)
            map.insert(make_pair(post[i],i));
       return helper(pre,0,pre.size()-1,0,pre.size()-1);

    }
private:
    unordered_map<int,int> map;
};
// @lc code=end

