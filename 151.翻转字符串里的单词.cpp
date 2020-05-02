/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        vector <string> sv;
        int len = s.length();
        if(!len) return "";
        int j;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != ' ')
            {
                for (j = i; j < len; j++)
                {
                    if (s[j] == ' ')
                        break;
                }
                sv.emplace_back(s.substr(i, j-i));
                i = j - 1;
            }
        }
        if(!sv.size()) return "";
        string ans;
        for (int i = sv.size() - 1; i > 0; i--)
        {
            ans += (sv[i] + ' ');
        }
        ans += sv[0];
        return ans;
    }
};
// @lc code=end

