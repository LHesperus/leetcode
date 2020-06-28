/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        if(s.length()<2) return s;
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                for(int ii=0;i-1-ii>j+ii;ii++)
                    swap(s[i-1-ii],s[j+ii]);
                j=i+1;
            }
        }
        for(int ii=0;s.length()-1-ii>j+ii;ii++)
            swap(s[s.length()-1-ii],s[j+ii]);
        return s;
    }
};
// @lc code=end

