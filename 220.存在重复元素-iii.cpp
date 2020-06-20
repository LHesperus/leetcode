/*
 * @lc app=leetcode.cn id=220 lang=cpp
 *
 * [220] 存在重复元素 III
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int len=nums.size();
        if(len<2) return false;
        if(t<0||k<=0) return false;
        vector<int >::iterator itmin=min_element(nums.begin(),nums.end());
        int minv=(*itmin);
        vector<long int> numsl;
        for(int &n:nums) 
        {
            numsl.push_back((long int)n-(long int)minv);
        }
        if(t==0)
        {
            unordered_map<int,int> map0;
            for(int i=0;i<len;i++)
            {
                if(map0.count(numsl[i])&&i-map0[numsl[i]]<=k) return true;
                else if(map0.count(numsl[i])&&i-map0[numsl[i]]>k) map0[numsl[i]]=i;
                else map0.insert(make_pair(numsl[i],i));
                
            }
        }else
        {
            unordered_map<int,vector<int>> map1;
            for(int i=0;i<len;i++)
            {
                int mod=numsl[i]/t;
                if(map1.count(mod))
                {
                    for(int ii=0;ii<map1[mod].size();ii++)
                    {
                        if(abs(map1[mod][ii]-i)<=k) return true;
                    }
                    map1[mod].push_back(i);
                }
                if(map1.count(mod-1))
                    for(int iii:map1[mod-1])
                        if(abs(iii-i)<=k&&abs(numsl[iii]-numsl[i])<=t) return true;
                if(map1.count(mod+1))
                    for(int iii:map1[mod+1])
                        if(abs(iii-i)<=k&&abs(numsl[iii]-numsl[i])<=t) return true;
                if(!map1.count(mod))
                {
                    vector<int> tmp;
                    tmp.push_back(i);
                    map1.insert(make_pair(mod,tmp));
                }   
            }
        }
        
        
        return false;
    }
};
// @lc code=end

