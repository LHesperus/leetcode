/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(!needle.length()) return 0;
        if(needle.length()>haystack.length()) return -1;
        int nlen=needle.length();
        int hlen=haystack.length();
        for(int i=0;i<hlen-nlen+1;i++)
        {
            for(int j=0;j<nlen;j++)
            {
                if(haystack[i+j]!=needle[j]) 
                    break;
                if(j==nlen-1)
                    return i;
            }
        }
        return -1;
    }
};
// @lc code=end

