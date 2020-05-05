/*
 * @lc app=leetcode.cn id=771 lang=cpp
 *
 * [771] 宝石与石头
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int>map;
        int ans=0;
        for(char& s:S)
        {
            if(map.count(s))
            {
                map[s]++;
            }else
            {
                map.insert(make_pair(s,1));
            }
            //cout<<s<<":"<<map[s]<<endl;
        }
        for(char &s:J)
            if(map.count(s))
                ans+=map[s];
        return ans;
    }
};
// @lc code=end

