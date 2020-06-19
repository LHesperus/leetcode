/*
 * @lc app=leetcode.cn id=451 lang=cpp
 *
 * [451] 根据字符出现频率排序
 */

// @lc code=start
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map1;
        for(char c:s)
        {
            if(map1.count(c)) map1[c]++;
            else map1.insert(make_pair(c,1));
        }
        unordered_map<int,string> map2;
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(map1.count(s[i]))
            {
                if(map2.count(map1[s[i]]))
                {
                    map2[map1[s[i]]]+=s[i];
                }else
                {
                    map2.insert(make_pair(map1[s[i]],""));
                    map2[map1[s[i]]]+=s[i];
                }
                map1.erase(s[i]); 
            }
        }
        vector<int > cnt;
        for(int i=1;i<=s.length();i++)
            if(map2.count(i))
                cnt.push_back(i);
        sort(cnt.begin(),cnt.end());
        for(int i=cnt.size()-1;i>=0;i--)
            for(int k=0;k<map2[cnt[i]].length();k++)
                for(int j=0;j<cnt[i];j++)
                    ans+=map2[cnt[i]][k];
        return ans;
    }
};
// @lc code=end

