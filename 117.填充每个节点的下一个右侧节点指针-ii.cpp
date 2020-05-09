/*
 * @lc app=leetcode.cn id=117 lang=cpp
 *
 * [117] 填充每个节点的下一个右侧节点指针 II
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        queue<Node*> q;
        q.push(root);
        Node *rt;
        while(q.size())
        {
            for(int i=q.size();i>0;i--)
            {
                rt=q.front();
                q.pop();
                if(i>1)
                {
                    rt->next=q.front();
                }else
                {
                    rt->next=NULL;
                }
                if(rt->left) q.push(rt->left);
                if(rt->right) q.push(rt->right);
            }
        }
        return root;
    }
};
// @lc code=end

