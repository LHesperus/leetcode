/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 * 字符串sort后归为1类
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,int> map;
        int i=0;
        for(string &s:strs)
        {
            string stmp=s;
            sort(stmp.begin(),stmp.end());
            if(!map.count(stmp))
            {
                map.insert(make_pair(stmp,i++));
                //ans.resize(ans.size()+1);
                ans.emplace_back(vector<string>{s});
            }else
            {
                ans[map[stmp]].emplace_back(s);
            }
        }
        return ans;
    }
};
// @lc code=end

