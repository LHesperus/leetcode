/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        vector<int>ans;
        for(int &n:nums)
        {
            if(map.count(n))
            {
                map[n]++;
            }else
            {
                map.insert(make_pair(n,1));
            }
        }
        for(auto it=map.begin();it!=map.end();it++)
            ans.emplace_back(it->second);
        sort(ans.begin(),ans.end());
        //unordered_set<int>set;
        vector<bool> set(nums.size(),false);
        int len=k<=ans.size()?k:ans.size();
        for(int i=0;i<len;i++)
        {
            //set.insert(ans[ans.size()-i-1]);
            set[ans[ans.size()-i-1]]=true;
        }
        ans.resize(0);
        for(auto it=map.begin();it!=map.end();it++)
            //if(set.count(it->second))
              if(set[it->second])
                ans.emplace_back(it->first);
        return ans;
    }
};
// @lc code=end

