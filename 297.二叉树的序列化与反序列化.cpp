/*
 * @lc app=leetcode.cn id=297 lang=cpp
 *
 * [297] 二叉树的序列化与反序列化
 * 层序遍历好像有点绕，有时间写一个前序遍历的试试
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
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode*> q;
        string ans;
        TreeNode* rt;
        if(root==NULL) return "n";
        q.push(root);
        ans+=root->val+'0';
        while(q.size())
        {
            for(int i=q.size();i>0;i--)
            {
                rt=q.front();
                if(rt->left) 
                {
                    q.push(rt->left);
                    ans+=rt->left->val+'0';
                }
                else ans+='n';
                if(rt->right) 
                {
                    q.push(rt->right);
                    ans+=rt->right->val+'0';
                }
                else ans+='n';
                q.pop();
            }
        }
        cout<<ans<<endl;
        return ans;
    }


    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        data="123nn45";
        if(data.size()&&data[0]=='n') return NULL;
        int i=0;
        int nown=1;
        int nestn=2;
        int nesttmp=0;
        TreeNode* rt=new TreeNode(data[0]-'0');
        while(i<data.size())
        {
            for(int j=0;j<nestn;)
            {
                if(data[i]!='n')
                {
                    TreeNode* rt=new TreeNode(data[i]-'0');
                    if(data[i+nown+j]!='n')
                    {
                        rt->left=new TreeNode(data[i+nown+j]-'0');
                      //  rt->left->val=data[i+nown+j]-'0';
                        nesttmp+=2;
                    }
                    j++;
                    if(data[i+nown+j]!='n')
                    {
                        rt->right=new TreeNode(data[i+nown+j]-'0');
                        //rt->right->val=data[i+nown+j]-'0';
                        nesttmp+=2;
                    }
                    j++;               
                }
                i++;
                cout<<i<<endl;
            }
            nown=nestn;
            nestn=nesttmp;
            nesttmp=0;
        }
        TreeNode* rt=new TreeNode(data[0]-'0');
        return rt;

    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
// @lc code=end

