/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 * 两个map，s->t,t->s
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char> map,map2;
        for(int i=0;i<s.length();i++)
        {
            if(!map.count(s[i]))
            {
                map.insert(make_pair(s[i],t[i]));
            }else if(map[s[i]]!=t[i])
            {
                return false;
            }
            

            if(!map2.count(t[i]))
            {
                map2.insert(make_pair(t[i],s[i]));
            }else if(map2[t[i]]!=s[i])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

