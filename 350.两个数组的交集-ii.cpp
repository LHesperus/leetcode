/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int ,int> map1;
        vector<int > ans;
        for(int i=0;i<nums1.size();i++)
        {
            if(!map1.count(nums1[i]))
            {
                map1.insert(make_pair(nums1[i],1));
            }else
            {
                map1[nums1[i]]++;
            }
        }
        for(int &n:nums2)
        {
            if(map1.count(n))
            {
                ans.push_back(n);
                if(!--map1[n])
                    map1.erase(n);
                
            }
        }
        return ans;
    }
};
// @lc code=end

