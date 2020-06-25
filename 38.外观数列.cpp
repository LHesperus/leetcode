/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
public:
    string helper(vector<int> &vec,int depth)
    {
        if(depth==0) 
        {
            //vec转string
            string s;
            for(int v:vec)
                s+=(v+'0');
            return s;
        } 
        int cnt=1;
        vector<int> next;
        for(int i=1;i<vec.size();i++)
        {
            if(vec[i-1]==vec[i]) cnt++;
            else 
            {
                next.push_back(cnt);
                next.push_back(vec[i-1]);
                cnt=1;
            }
        }
        next.push_back(cnt);
        next.push_back(vec[vec.size()-1]);
        return helper(next,depth-1);
        
        
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        vector<int> tmp={1,1};
        return helper(tmp,n-2);
    }
};
// @lc code=end

