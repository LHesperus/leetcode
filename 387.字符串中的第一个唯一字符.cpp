/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map1;
        char c;
        for(int i=0;i<s.size();i++)
        {
            c=s[i];
            if(map1.count(c))
                map1[c]=-1;
            else
                map1.insert(make_pair(c,i));
        }
        for(int i=0;i<s.size();i++)
            if(map1[s[i]]!=-1)
                return map1[s[i]];
        return -1;
    }
};
// @lc code=end

