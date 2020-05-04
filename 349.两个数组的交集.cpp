/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> tmp1;
        vector<int >ans;
        for(int &v:nums1)
            tmp1.insert(v);
        for(int &v:nums2)
            if(tmp1.count(v))
            {
                ans.emplace_back(v);
                tmp1.erase(v);
            }
        return ans;
    }
};
// @lc code=end

