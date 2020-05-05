/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;
        char c;
        int len=0,maxlen=0;
        //int start=0;
        for(int i=0;i<s.length();i++)
        {
            c=s[i];
            if(!map.count(c))
            {
                map.insert(make_pair(c,i));
                len++;
            }else
            {
                for(int j=i-len;j<map[c];j++)
                {
                    map.erase(s[j]);
                }             
                if(len>maxlen)
                    maxlen=len;
                len=i-map[c];
                map[c]=i;
            }
        }
        if(len>maxlen)
           maxlen=len;
        return maxlen;
    }
};
// @lc code=end

