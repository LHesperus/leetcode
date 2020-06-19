/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> map1;
        for(char c:s)
        {
            if(map1.count(c))
                map1[c]++;
            else
                map1.insert(make_pair(c,1));
        }
        for(char c:t)
        {
            if(map1.count(c))
            {
                map1[c]--;
                if(map1[c]==-1)
                    return false;
            }else
            {
                return false;
            }
            
        }
        return true;
    }
};
// @lc code=end

