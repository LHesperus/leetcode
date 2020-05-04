/*
 * @lc app=leetcode.cn id=599 lang=cpp
 *
 * [599] 两个列表的最小索引总和
 */

// @lc code=start
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>map1,map2;
        vector<string> ans;
        int minp=list1.size()+list2.size();
        for(int i=0;i<list1.size();i++)
            if(!map1.count(list1[i]))
                map1.insert(make_pair(list1[i],i));
        
        for(int i=0;i<list2.size();i++)
            if(map1.count(list2[i]))
                map2.insert(make_pair(list2[i],map1[list2[i]]+i));
        
        for(auto it=map2.begin();it!=map2.end();it++)
        {
            if(it->second<minp)
            {
                ans.clear();
                minp=it->second;
                ans.push_back(it->first);
            }else if(it->second==minp)
            {
                ans.push_back(it->first);
            }
            
        }
        return ans;
    }
};
// @lc code=end

