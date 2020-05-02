/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        bool flag=false;
        if(!strs.size()) return ans;
        if(strs.size()==1) return strs[0];
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(i>=strs[j].size()) return ans;
                if(strs[0][i]!=strs[j][i]) return ans;
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};
// @lc code=end

